#InstallKeybdHook
#InstallMouseHook
#KeyHistory 500
#NoEnv
#SingleInstance Force
SendMode Input
SetKeyDelay, -1, -1
SetMouseDelay, -1
SetCapsLockState, AlwaysOff   ; disable native CapsLock toggle
GroupAdd AltTabWindow, ahk_class MultitaskingViewFrame  ; Windows 10

; --- Alt + key mappings ---
;!SC00D::´
!ö::SendInput {Text}~
!h::Send {RAlt Down}7{RAlt Up}
!l::Send {RAlt Down}0{RAlt Up}
!y::SendInput {Text}[
!o::SendInput {Text}]
!j::SendInput {Text}(
!k::SendInput {Text})
!u::SendInput {Text}<
!i::SendInput {Text}>
!ä::SendInput {Text}?
!p::SendInput {Text}
!m::Send {/}
!SC01B::Send {\}
!n::Send {Shift Down}0{Shift Up} ; Alt+n blir =
!,::Send {Shift Down}2{Shift Up}  ; alt+, blir "
!.::SendInput {Text}\
!-::SendInput {Text}^
!'::SendInput {Text}&
!a::Send {Ctrl Down}a{Ctrl Up}

; --- Ctrl + key mappings ---
;^SC00D::`
^SC01B::SendInput {Text}^
; not yet used! ^å::SendInput {Text}~
; not yet used! ^p::SendInput {Text}~
; not yet used! ^SC01B::SendInput {Text}~

; --- total remaps ---
SC01B::Send {/}
SC15D::SendInput {SC01C} ; enter
SC029::SendInput {SC00F} ; --- § key = Tab ---

;Make Home button become redo
!SC147::Send {Ctrl Down}y{Ctrl Up}

; --------- CapsLock becomes ESC and modifyer key ----------

CapsLock::
	KeyWait, CapsLock
	If (A_PriorKey="CapsLock")
Send, {Esc}

Return

#If GetKeyState("SC03A", "P")
SC032::Send {0} ; m
SC024::Send {1} ; j
SC025::Send {2} ; k
SC026::Send {3} ; l
SC027::Send {3} ; ö
SC016::Send {4} ; u
SC017::Send {5} ; i
SC018::Send {6} ; o
SC033::Send {7} ; ,
SC034::Send {8} ; .
SC035::Send {9} ; -
SC031::SendInput {SC00C} ; caps+n blir +
r::Send {Ctrl Down}r{Ctrl Up}
d::Send {Ctrl Down}a{Ctrl Up}
s::Send {Ctrl Down}s{Ctrl Up}
g::Send {LWin Down}{Shift Down}s{Shift Up}{LWin Up}
SC02C::Send {Ctrl Down}z{Ctrl Up} ; z
q::Send {Ctrl Down}z{Ctrl Up} ;
x::Send {Ctrl Down}x{Ctrl Up}
a::Send {Ctrl Down}c{Ctrl Up}
c::Send {Ctrl Down}c{Ctrl Up} ;
v::Send {LWin Down}v{LWin Up} ; Esc+v blir win+v
b::Send {LWin Down}{Shift Down}s{Shift Up}{LWin Up}
e::Send {LWin Down}{Shift Down}t{Shift Up}{LWin Up}
y::Send {Ctrl Down}y{Ctrl Up}
f::Send {Ctrl Down}f{Ctrl Up}
w::Send {Ctrl Down}v{Ctrl Up}
;t::AltTabMenu
#If

;!Enter::Send {Alt up}  ; Release the Alt key, which activates the selected window.
;!Esc::Send {Alt up}  ; When the menu is cancelled, release the Alt key automatically
;#IfWinExist ahk_group AltTabWindow
;~*Esc::Send {Alt up}  ; When the menu is cancelled, release the Alt key automatically.
;*Esc::Send {Esc}{Alt up}  ; Without tilde (~), Escape would need to be sent.
;#If


; ------------- Make SC056 a pure modifier key OBS DET SOM INTE GER TECKEN LIGGER PÅ DENNA MODIFIER
SC056::Return

#If GetKeyState("SC056", "P")
SC025::Up
SC023::Left
SC024::Down
SC026::Right
SC031::SendInput {SC01C} ; n blir enter
SC033::SendInput {SC00E} ; , blir backspace
SC034::SendInput {SC153} ; . blir delete
SC016::SendInput {SC03B} ; u = F1
SC017::F2 ; i = F2
SC018::F3 ; o = F3
SC019::F4 ; o = F4
b::SendInput {SC147} ; b become home
e::SendInput {SC14F} ; e become end
y::Send {Ctrl Down}r{Ctrl Up}
SC027::SendInput {Text}$
#If