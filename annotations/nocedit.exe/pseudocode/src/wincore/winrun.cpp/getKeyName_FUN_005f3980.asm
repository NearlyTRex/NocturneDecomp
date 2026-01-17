; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * wincore_winrun.cpp_getKeyName_FUN_005f3980(int keycode)
;
; Parameters:
; int              Stack[0x4]:4   keycode
;
; XREF[1]:
;   core_menu.cpp_getKeyDisplayName_FUN_005134e0 at 0051370d
;
; Referenced Globals:
;   GetKeyNameTextA* g_GetKeyNameTextAFunc = 00211ae4
;   TerminatedCString s_Esc_00657f9a
;   TerminatedCString s_s_1_00657f9e
;   TerminatedCString s_s_2_00657fa0
;   TerminatedCString s_s_3_00657fa2
;   TerminatedCString s_s_4_00657fa4
;   TerminatedCString s_s_5_00657fa6
;   TerminatedCString s_s_6_00657fa8
;   TerminatedCString s_s_7_00657faa
;   TerminatedCString s_s_8_00657fac
;   TerminatedCString s_s_9_00657fae
;   TerminatedCString s_s_0_00657fb0
;   TerminatedCString s_anon_00657fb2
;   TerminatedCString s_anon_00657fb4
;   TerminatedCString s_BackSpace_00657fb6
;   ... and 89 more
;
; Called Functions:
;   GetKeyNameTextA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f3980
        ;   Label: wincore_winrun.cpp_getKeyName_FUN_005f3980
    MOV EBX,dword ptr [ESP + 0x8]       ; 005f3981
    CMP EBX,0x200                       ; 005f3985
    JL 0x005f39ce                       ; 005f398b
        ;   XREF to: 005f39ce (CONDITIONAL_JUMP)  ; LAB_005f39ce
    MOV EAX,EBX                         ; 005f398d
        ;   Label: LAB_005f398d
    CMP EBX,0x34                        ; 005f398f
    JNC 0x005f3bfb                      ; 005f3992
        ;   XREF to: 005f3bfb (CONDITIONAL_JUMP)  ; LAB_005f3bfb
    CMP EBX,0x19                        ; 005f3998
    JNC 0x005f3e36                      ; 005f399b
        ;   XREF to: 005f3e36 (CONDITIONAL_JUMP)  ; LAB_005f3e36
    CMP EBX,0xc                         ; 005f39a1
    JNC 0x005f3f26                      ; 005f39a4
        ;   XREF to: 005f3f26 (CONDITIONAL_JUMP)  ; LAB_005f3f26
    CMP EBX,0x6                         ; 005f39aa
    JNC 0x005f3f93                      ; 005f39ad
        ;   XREF to: 005f3f93 (CONDITIONAL_JUMP)  ; LAB_005f3f93
    CMP EBX,0x3                         ; 005f39b3
    JNC 0x005f3fc4                      ; 005f39b6
        ;   XREF to: 005f3fc4 (CONDITIONAL_JUMP)  ; LAB_005f3fc4
    CMP EBX,0x1                         ; 005f39bc
    JC 0x005f3cc7                       ; 005f39bf
        ;   XREF to: 005f3cc7 (CONDITIONAL_JUMP)  ; LAB_005f3cc7
    JA 0x005f39f5                       ; 005f39c5
        ;   XREF to: 005f39f5 (CONDITIONAL_JUMP)  ; LAB_005f39f5
    MOV EAX,0x657f9a                    ; 005f39c7 | = "Esc"
    POP EBX                             ; 005f39cc
    RET                                 ; 005f39cd
    MOV EAX,EBX                         ; 005f39ce
        ;   Label: LAB_005f39ce
    PUSH 0xc8                           ; 005f39d0
    AND EAX,0x1ff                       ; 005f39d5
    PUSH 0x3f983a0                      ; 005f39da | g_KeyNameBuffer
    SHL EAX,0x10                        ; 005f39df
    PUSH EAX                            ; 005f39e2
    CALL dword ptr CS:[0x6114ac]        ; 005f39e3 | g_GetKeyNameTextAFunc
    TEST EAX,EAX                        ; 005f39ea
    JLE 0x005f398d                      ; 005f39ec
        ;   XREF to: 005f398d (CONDITIONAL_JUMP)  ; LAB_005f398d
    MOV EAX,0x3f983a0                   ; 005f39ee | g_KeyNameBuffer
    POP EBX                             ; 005f39f3
    RET                                 ; 005f39f4
    MOV EAX,0x657f9e                    ; 005f39f5 | = "1"
        ;   Label: LAB_005f39f5
    POP EBX                             ; 005f39fa
    RET                                 ; 005f39fb
    MOV EAX,0x657fa0                    ; 005f39fc | = "2"
        ;   Label: LAB_005f39fc
    POP EBX                             ; 005f3a01
    RET                                 ; 005f3a02
    MOV EAX,0x657fa2                    ; 005f3a03 | = "3"
        ;   Label: LAB_005f3a03
    POP EBX                             ; 005f3a08
    RET                                 ; 005f3a09
    MOV EAX,0x657fa6                    ; 005f3a0a | = "5"
        ;   Label: LAB_005f3a0a
    POP EBX                             ; 005f3a0f
    RET                                 ; 005f3a10
    MOV EAX,0x657fa8                    ; 005f3a11 | = "6"
        ;   Label: LAB_005f3a11
    POP EBX                             ; 005f3a16
    RET                                 ; 005f3a17
    MOV EAX,0x657fac                    ; 005f3a18 | = "8"
        ;   Label: LAB_005f3a18
    POP EBX                             ; 005f3a1d
    RET                                 ; 005f3a1e
    MOV EAX,0x657fae                    ; 005f3a1f | = "9"
        ;   Label: LAB_005f3a1f
    POP EBX                             ; 005f3a24
    RET                                 ; 005f3a25
    MOV EAX,0x657fb2                    ; 005f3a26 | = "-"
        ;   Label: LAB_005f3a26
    POP EBX                             ; 005f3a2b
    RET                                 ; 005f3a2c
    MOV EAX,0x657fb4                    ; 005f3a2d | = "="
        ;   Label: LAB_005f3a2d
    POP EBX                             ; 005f3a32
    RET                                 ; 005f3a33
    MOV EAX,0x657fc0                    ; 005f3a34 | = "Tab"
        ;   Label: LAB_005f3a34
    POP EBX                             ; 005f3a39
    RET                                 ; 005f3a3a
    MOV EAX,0x657fc4                    ; 005f3a3b | = "Q"
        ;   Label: LAB_005f3a3b
    POP EBX                             ; 005f3a40
    RET                                 ; 005f3a41
    MOV EAX,0x657fc8                    ; 005f3a42 | = "E"
        ;   Label: LAB_005f3a42
    POP EBX                             ; 005f3a47
    RET                                 ; 005f3a48
    MOV EAX,0x657fca                    ; 005f3a49 | = "R"
        ;   Label: LAB_005f3a49
    POP EBX                             ; 005f3a4e
    RET                                 ; 005f3a4f
    MOV EAX,0x657fce                    ; 005f3a50 | = "Y"
        ;   Label: LAB_005f3a50
    POP EBX                             ; 005f3a55
    RET                                 ; 005f3a56
    MOV EAX,0x657fd0                    ; 005f3a57 | = "U"
        ;   Label: LAB_005f3a57
    POP EBX                             ; 005f3a5c
    RET                                 ; 005f3a5d
    MOV EAX,0x657fd2                    ; 005f3a5e | = "I"
        ;   Label: LAB_005f3a5e
    POP EBX                             ; 005f3a63
    RET                                 ; 005f3a64
    MOV EAX,0x657fd6                    ; 005f3a65 | = "P"
        ;   Label: LAB_005f3a65
    POP EBX                             ; 005f3a6a
    RET                                 ; 005f3a6b
    MOV EAX,0x657fd8                    ; 005f3a6c | = "["
        ;   Label: LAB_005f3a6c
    POP EBX                             ; 005f3a71
    RET                                 ; 005f3a72
    MOV EAX,0x657fdc                    ; 005f3a73 | = "Enter"
        ;   Label: LAB_005f3a73
    POP EBX                             ; 005f3a78
    RET                                 ; 005f3a79
    MOV EAX,0x657fe2                    ; 005f3a7a | = "LeftCtrl"
        ;   Label: LAB_005f3a7a
    POP EBX                             ; 005f3a7f
    RET                                 ; 005f3a80
    MOV EAX,0x657fed                    ; 005f3a81 | = "S"
        ;   Label: LAB_005f3a81
    POP EBX                             ; 005f3a86
    RET                                 ; 005f3a87
    MOV EAX,0x657fef                    ; 005f3a88 | = "D"
        ;   Label: LAB_005f3a88
    POP EBX                             ; 005f3a8d
    RET                                 ; 005f3a8e
    MOV EAX,0x657ff3                    ; 005f3a8f | = "G"
        ;   Label: LAB_005f3a8f
    POP EBX                             ; 005f3a94
    RET                                 ; 005f3a95
    MOV EAX,0x657ff5                    ; 005f3a96 | = "H"
        ;   Label: LAB_005f3a96
    POP EBX                             ; 005f3a9b
    RET                                 ; 005f3a9c
    MOV EAX,0x657ff7                    ; 005f3a9d | = "J"
        ;   Label: LAB_005f3a9d
    POP EBX                             ; 005f3aa2
    RET                                 ; 005f3aa3
    MOV EAX,0x657ffb                    ; 005f3aa4 | = "L"
        ;   Label: LAB_005f3aa4
    POP EBX                             ; 005f3aa9
    RET                                 ; 005f3aaa
    MOV EAX,0x657ffd                    ; 005f3aab | = ";"
        ;   Label: LAB_005f3aab
    POP EBX                             ; 005f3ab0
    RET                                 ; 005f3ab1
    MOV EAX,0x658001                    ; 005f3ab2 | = "`"
        ;   Label: LAB_005f3ab2
    POP EBX                             ; 005f3ab7
    RET                                 ; 005f3ab8
    MOV EAX,0x658003                    ; 005f3ab9 | = "LeftShift"
        ;   Label: LAB_005f3ab9
    POP EBX                             ; 005f3abe
    RET                                 ; 005f3abf
    MOV EAX,0x65800d                    ; 005f3ac0 | = "Z"
        ;   Label: LAB_005f3ac0
    POP EBX                             ; 005f3ac5
    RET                                 ; 005f3ac6
    MOV EAX,0x65800f                    ; 005f3ac7 | = "X"
        ;   Label: LAB_005f3ac7
    POP EBX                             ; 005f3acc
    RET                                 ; 005f3acd
    MOV EAX,0x658011                    ; 005f3ace | = "C"
        ;   Label: LAB_005f3ace
    POP EBX                             ; 005f3ad3
    RET                                 ; 005f3ad4
    MOV EAX,0x658015                    ; 005f3ad5 | = "B"
        ;   Label: LAB_005f3ad5
    POP EBX                             ; 005f3ada
    RET                                 ; 005f3adb
    MOV EAX,0x658017                    ; 005f3adc | = "N"
        ;   Label: LAB_005f3adc
    POP EBX                             ; 005f3ae1
    RET                                 ; 005f3ae2
    MOV EAX,0x658019                    ; 005f3ae3 | = "M"
        ;   Label: LAB_005f3ae3
    POP EBX                             ; 005f3ae8
    RET                                 ; 005f3ae9
    MOV EAX,0x65801d                    ; 005f3aea | = "."
        ;   Label: LAB_005f3aea
    POP EBX                             ; 005f3aef
    RET                                 ; 005f3af0
    MOV EAX,0x65801f                    ; 005f3af1 | = "/"
        ;   Label: LAB_005f3af1
    POP EBX                             ; 005f3af6
    RET                                 ; 005f3af7
    MOV EAX,0x65802c                    ; 005f3af8 | = "NumPad*"
        ;   Label: LAB_005f3af8
    POP EBX                             ; 005f3afd
    RET                                 ; 005f3afe
    MOV EAX,0x658034                    ; 005f3aff | = "LeftAlt"
        ;   Label: LAB_005f3aff
    POP EBX                             ; 005f3b04
    RET                                 ; 005f3b05
    MOV EAX,0x658042                    ; 005f3b06 | = "CapsLock"
        ;   Label: LAB_005f3b06
    POP EBX                             ; 005f3b0b
    RET                                 ; 005f3b0c
    MOV EAX,0x65804b                    ; 005f3b0d | = "F1"
        ;   Label: LAB_005f3b0d
    POP EBX                             ; 005f3b12
    RET                                 ; 005f3b13
    MOV EAX,0x658051                    ; 005f3b14 | = "F3"
        ;   Label: LAB_005f3b14
    POP EBX                             ; 005f3b19
    RET                                 ; 005f3b1a
    MOV EAX,0x658054                    ; 005f3b1b | = "F4"
        ;   Label: LAB_005f3b1b
    POP EBX                             ; 005f3b20
    RET                                 ; 005f3b21
    MOV EAX,0x65805a                    ; 005f3b22 | = "F6"
        ;   Label: LAB_005f3b22
    POP EBX                             ; 005f3b27
    RET                                 ; 005f3b28
    MOV EAX,0x65805d                    ; 005f3b29 | = "F7"
        ;   Label: LAB_005f3b29
    POP EBX                             ; 005f3b2e
    RET                                 ; 005f3b2f
    MOV EAX,0x658063                    ; 005f3b30 | = "F9"
        ;   Label: LAB_005f3b30
    POP EBX                             ; 005f3b35
    RET                                 ; 005f3b36
    MOV EAX,0x658066                    ; 005f3b37 | = "F10"
        ;   Label: LAB_005f3b37
    POP EBX                             ; 005f3b3c
    RET                                 ; 005f3b3d
    MOV EAX,0x658070                    ; 005f3b3e | = "ScrollLock"
        ;   Label: LAB_005f3b3e
    POP EBX                             ; 005f3b43
    RET                                 ; 005f3b44
    MOV EAX,0x65807b                    ; 005f3b45 | = "NumPad7"
        ;   Label: LAB_005f3b45
    POP EBX                             ; 005f3b4a
    RET                                 ; 005f3b4b
    MOV EAX,0x65808b                    ; 005f3b4c | = "NumPad9"
        ;   Label: LAB_005f3b4c
    POP EBX                             ; 005f3b51
    RET                                 ; 005f3b52
    MOV EAX,0x658093                    ; 005f3b53 | = "NumPad-"
        ;   Label: LAB_005f3b53
    POP EBX                             ; 005f3b58
    RET                                 ; 005f3b59
    MOV EAX,0x65809b                    ; 005f3b5a | = "NumPad4"
        ;   Label: LAB_005f3b5a
    POP EBX                             ; 005f3b5f
    RET                                 ; 005f3b60
    MOV EAX,0x6580ab                    ; 005f3b61 | = "NumPad6"
        ;   Label: LAB_005f3b61
    POP EBX                             ; 005f3b66
    RET                                 ; 005f3b67
    MOV EAX,0x6580b3                    ; 005f3b68 | = "NumPad+"
        ;   Label: LAB_005f3b68
    POP EBX                             ; 005f3b6d
    RET                                 ; 005f3b6e
    MOV EAX,0x6580c3                    ; 005f3b6f | = "NumPad2"
        ;   Label: LAB_005f3b6f
    POP EBX                             ; 005f3b74
    RET                                 ; 005f3b75
    MOV EAX,0x6580cb                    ; 005f3b76 | = "NumPad3"
        ;   Label: LAB_005f3b76
    POP EBX                             ; 005f3b7b
    RET                                 ; 005f3b7c
    MOV EAX,0x6580db                    ; 005f3b7d | = "NumPad."
        ;   Label: LAB_005f3b7d
    POP EBX                             ; 005f3b82
    RET                                 ; 005f3b83
    MOV EAX,0x6580e3                    ; 005f3b84 | = "F11"
        ;   Label: LAB_005f3b84
    POP EBX                             ; 005f3b89
    RET                                 ; 005f3b8a
    MOV EAX,0x6580e7                    ; 005f3b8b | = "F12"
        ;   Label: LAB_005f3b8b
    POP EBX                             ; 005f3b90
    RET                                 ; 005f3b91
    MOV EAX,0x6580eb                    ; 005f3b92 | = "NumPadEnter"
        ;   Label: LAB_005f3b92
    POP EBX                             ; 005f3b97
    RET                                 ; 005f3b98
    MOV EAX,0x6580f7                    ; 005f3b99 | = "RightCtrl"
        ;   Label: LAB_005f3b99
    POP EBX                             ; 005f3b9e
    RET                                 ; 005f3b9f
    MOV EAX,0x658101                    ; 005f3ba0 | = "NumPad/"
        ;   Label: LAB_005f3ba0
    POP EBX                             ; 005f3ba5
    RET                                 ; 005f3ba6
    MOV EAX,0x658109                    ; 005f3ba7 | = "RightAlt"
        ;   Label: LAB_005f3ba7
    POP EBX                             ; 005f3bac
    RET                                 ; 005f3bad
    MOV EAX,0x658112                    ; 005f3bae | = "NumLock"
        ;   Label: LAB_005f3bae
    POP EBX                             ; 005f3bb3
    RET                                 ; 005f3bb4
    MOV EAX,0x65811a                    ; 005f3bb5 | = "Home"
        ;   Label: LAB_005f3bb5
    POP EBX                             ; 005f3bba
    RET                                 ; 005f3bbb
    MOV EAX,0x658122                    ; 005f3bbc | = "PgUp"
        ;   Label: LAB_005f3bbc
    POP EBX                             ; 005f3bc1
    RET                                 ; 005f3bc2
    MOV EAX,0x658127                    ; 005f3bc3 | = "Left"
        ;   Label: LAB_005f3bc3
    POP EBX                             ; 005f3bc8
    RET                                 ; 005f3bc9
    MOV EAX,0x65812c                    ; 005f3bca | = "Right"
        ;   Label: LAB_005f3bca
    POP EBX                             ; 005f3bcf
    RET                                 ; 005f3bd0
    MOV EAX,0x658132                    ; 005f3bd1 | = "End"
        ;   Label: LAB_005f3bd1
    POP EBX                             ; 005f3bd6
    RET                                 ; 005f3bd7
    MOV EAX,0x658136                    ; 005f3bd8 | = "Down"
        ;   Label: LAB_005f3bd8
    POP EBX                             ; 005f3bdd
    RET                                 ; 005f3bde
    MOV EAX,0x658140                    ; 005f3bdf | = "Ins"
        ;   Label: LAB_005f3bdf
    POP EBX                             ; 005f3be4
    RET                                 ; 005f3be5
    MOV EAX,0x658144                    ; 005f3be6 | = "Del"
        ;   Label: LAB_005f3be6
    POP EBX                             ; 005f3beb
    RET                                 ; 005f3bec
    MOV EAX,0x658148                    ; 005f3bed | = "Left Mouse Button"
        ;   Label: LAB_005f3bed
    POP EBX                             ; 005f3bf2
    RET                                 ; 005f3bf3
    MOV EAX,0x65815a                    ; 005f3bf4 | = "Right Mouse Button"
        ;   Label: LAB_005f3bf4
    POP EBX                             ; 005f3bf9
    RET                                 ; 005f3bfa
    JBE 0x005f3aea                      ; 005f3bfb
        ;   XREF to: 005f3aea (CONDITIONAL_JUMP)  ; LAB_005f3aea
        ;   Label: LAB_005f3bfb
    CMP EBX,0x4d                        ; 005f3c01
    JNC 0x005f3c31                      ; 005f3c04
        ;   XREF to: 005f3c31 (CONDITIONAL_JUMP)  ; LAB_005f3c31
    CMP EBX,0x40                        ; 005f3c06
    JNC 0x005f3d82                      ; 005f3c09
        ;   XREF to: 005f3d82 (CONDITIONAL_JUMP)  ; LAB_005f3d82
    CMP EBX,0x3a                        ; 005f3c0f
    JNC 0x005f3def                      ; 005f3c12
        ;   XREF to: 005f3def (CONDITIONAL_JUMP)  ; LAB_005f3def
    CMP EBX,0x37                        ; 005f3c18
    JNC 0x005f3e20                      ; 005f3c1b
        ;   XREF to: 005f3e20 (CONDITIONAL_JUMP)  ; LAB_005f3e20
    CMP EBX,0x35                        ; 005f3c21
    JBE 0x005f3af1                      ; 005f3c24
        ;   XREF to: 005f3af1 (CONDITIONAL_JUMP)  ; LAB_005f3af1
    MOV EAX,0x658021                    ; 005f3c2a | = "RightShift"
    POP EBX                             ; 005f3c2f
    RET                                 ; 005f3c30
    JBE 0x005f3b61                      ; 005f3c31
        ;   XREF to: 005f3b61 (CONDITIONAL_JUMP)  ; LAB_005f3b61
        ;   Label: LAB_005f3c31
    CMP EBX,0x145                       ; 005f3c37
    JNC 0x005f3c61                      ; 005f3c3d
        ;   XREF to: 005f3c61 (CONDITIONAL_JUMP)  ; LAB_005f3c61
    CMP EBX,0x53                        ; 005f3c3f
    JNC 0x005f3d09                      ; 005f3c42
        ;   XREF to: 005f3d09 (CONDITIONAL_JUMP)  ; LAB_005f3d09
    CMP EBX,0x50                        ; 005f3c48
    JNC 0x005f3d6c                      ; 005f3c4b
        ;   XREF to: 005f3d6c (CONDITIONAL_JUMP)  ; LAB_005f3d6c
    CMP EBX,0x4e                        ; 005f3c51
    JBE 0x005f3b68                      ; 005f3c54
        ;   XREF to: 005f3b68 (CONDITIONAL_JUMP)  ; LAB_005f3b68
    MOV EAX,0x6580bb                    ; 005f3c5a | = "NumPad1"
    POP EBX                             ; 005f3c5f
    RET                                 ; 005f3c60
    JBE 0x005f3bae                      ; 005f3c61
        ;   XREF to: 005f3bae (CONDITIONAL_JUMP)  ; LAB_005f3bae
        ;   Label: LAB_005f3c61
    CMP EBX,0x14f                       ; 005f3c67
    JNC 0x005f3c8c                      ; 005f3c6d
        ;   XREF to: 005f3c8c (CONDITIONAL_JUMP)  ; LAB_005f3c8c
    CMP EBX,0x149                       ; 005f3c6f
    JNC 0x005f3ce2                      ; 005f3c75
        ;   XREF to: 005f3ce2 (CONDITIONAL_JUMP)  ; LAB_005f3ce2
    CMP EBX,0x147                       ; 005f3c77
    JC 0x005f3cc7                       ; 005f3c7d
        ;   XREF to: 005f3cc7 (CONDITIONAL_JUMP)  ; LAB_005f3cc7
    JBE 0x005f3bb5                      ; 005f3c7f
        ;   XREF to: 005f3bb5 (CONDITIONAL_JUMP)  ; LAB_005f3bb5
    MOV EAX,0x65811f                    ; 005f3c85 | = "Up"
    POP EBX                             ; 005f3c8a
    RET                                 ; 005f3c8b
    JBE 0x005f3bd1                      ; 005f3c8c
        ;   XREF to: 005f3bd1 (CONDITIONAL_JUMP)  ; LAB_005f3bd1
        ;   Label: LAB_005f3c8c
    CMP EBX,0x152                       ; 005f3c92
    JNC 0x005f3cad                      ; 005f3c98
        ;   XREF to: 005f3cad (CONDITIONAL_JUMP)  ; LAB_005f3cad
    CMP EBX,0x150                       ; 005f3c9a
    JBE 0x005f3bd8                      ; 005f3ca0
        ;   XREF to: 005f3bd8 (CONDITIONAL_JUMP)  ; LAB_005f3bd8
    MOV EAX,0x65813b                    ; 005f3ca6 | = "PgDn"
    POP EBX                             ; 005f3cab
    RET                                 ; 005f3cac
    JBE 0x005f3bdf                      ; 005f3cad
        ;   XREF to: 005f3bdf (CONDITIONAL_JUMP)  ; LAB_005f3bdf
        ;   Label: LAB_005f3cad
    CMP EBX,0x200                       ; 005f3cb3
    JNC 0x005f3cce                      ; 005f3cb9
        ;   XREF to: 005f3cce (CONDITIONAL_JUMP)  ; LAB_005f3cce
    CMP EBX,0x153                       ; 005f3cbb
    JZ 0x005f3be6                       ; 005f3cc1
        ;   XREF to: 005f3be6 (CONDITIONAL_JUMP)  ; LAB_005f3be6
    MOV EAX,0x65816d                    ; 005f3cc7 | = "(invalid key)"
        ;   Label: LAB_005f3cc7
    POP EBX                             ; 005f3ccc
    RET                                 ; 005f3ccd
    JBE 0x005f3bed                      ; 005f3cce
        ;   XREF to: 005f3bed (CONDITIONAL_JUMP)  ; LAB_005f3bed
        ;   Label: LAB_005f3cce
    CMP EBX,0x201                       ; 005f3cd4
    JZ 0x005f3bf4                       ; 005f3cda
        ;   XREF to: 005f3bf4 (CONDITIONAL_JUMP)  ; LAB_005f3bf4
    JMP 0x005f3cc7                      ; 005f3ce0
        ;   XREF to: 005f3cc7 (UNCONDITIONAL_JUMP)  ; LAB_005f3cc7
    JBE 0x005f3bbc                      ; 005f3ce2
        ;   XREF to: 005f3bbc (CONDITIONAL_JUMP)  ; LAB_005f3bbc
        ;   Label: LAB_005f3ce2
    CMP EBX,0x14b                       ; 005f3ce8
    JC 0x005f3cc7                       ; 005f3cee
        ;   XREF to: 005f3cc7 (CONDITIONAL_JUMP)  ; LAB_005f3cc7
    JBE 0x005f3bc3                      ; 005f3cf0
        ;   XREF to: 005f3bc3 (CONDITIONAL_JUMP)  ; LAB_005f3bc3
    CMP EBX,0x14d                       ; 005f3cf6
    JZ 0x005f3bca                       ; 005f3cfc
        ;   XREF to: 005f3bca (CONDITIONAL_JUMP)  ; LAB_005f3bca
    MOV EAX,0x65816d                    ; 005f3d02 | = "(invalid key)"
    POP EBX                             ; 005f3d07
    RET                                 ; 005f3d08
    JBE 0x005f3b7d                      ; 005f3d09
        ;   XREF to: 005f3b7d (CONDITIONAL_JUMP)  ; LAB_005f3b7d
        ;   Label: LAB_005f3d09
    CMP EBX,0x11c                       ; 005f3d0f
    JNC 0x005f3d32                      ; 005f3d15
        ;   XREF to: 005f3d32 (CONDITIONAL_JUMP)  ; LAB_005f3d32
    CMP EBX,0x57                        ; 005f3d17
    JC 0x005f3cc7                       ; 005f3d1a
        ;   XREF to: 005f3cc7 (CONDITIONAL_JUMP)  ; LAB_005f3cc7
    JBE 0x005f3b84                      ; 005f3d1c
        ;   XREF to: 005f3b84 (CONDITIONAL_JUMP)  ; LAB_005f3b84
    CMP EBX,0x58                        ; 005f3d22
    JZ 0x005f3b8b                       ; 005f3d25
        ;   XREF to: 005f3b8b (CONDITIONAL_JUMP)  ; LAB_005f3b8b
    MOV EAX,0x65816d                    ; 005f3d2b | = "(invalid key)"
    POP EBX                             ; 005f3d30
    RET                                 ; 005f3d31
    JBE 0x005f3b92                      ; 005f3d32
        ;   XREF to: 005f3b92 (CONDITIONAL_JUMP)  ; LAB_005f3b92
        ;   Label: LAB_005f3d32
    CMP EBX,0x135                       ; 005f3d38
    JNC 0x005f3d53                      ; 005f3d3e
        ;   XREF to: 005f3d53 (CONDITIONAL_JUMP)  ; LAB_005f3d53
    CMP EBX,0x11d                       ; 005f3d40
    JZ 0x005f3b99                       ; 005f3d46
        ;   XREF to: 005f3b99 (CONDITIONAL_JUMP)  ; LAB_005f3b99
    MOV EAX,0x65816d                    ; 005f3d4c | = "(invalid key)"
    POP EBX                             ; 005f3d51
    RET                                 ; 005f3d52
    JBE 0x005f3ba0                      ; 005f3d53
        ;   XREF to: 005f3ba0 (CONDITIONAL_JUMP)  ; LAB_005f3ba0
        ;   Label: LAB_005f3d53
    CMP EBX,0x138                       ; 005f3d59
    JZ 0x005f3ba7                       ; 005f3d5f
        ;   XREF to: 005f3ba7 (CONDITIONAL_JUMP)  ; LAB_005f3ba7
    MOV EAX,0x65816d                    ; 005f3d65 | = "(invalid key)"
    POP EBX                             ; 005f3d6a
    RET                                 ; 005f3d6b
    JBE 0x005f3b6f                      ; 005f3d6c
        ;   XREF to: 005f3b6f (CONDITIONAL_JUMP)  ; LAB_005f3b6f
        ;   Label: LAB_005f3d6c
    CMP EBX,0x51                        ; 005f3d72
    JBE 0x005f3b76                      ; 005f3d75
        ;   XREF to: 005f3b76 (CONDITIONAL_JUMP)  ; LAB_005f3b76
    MOV EAX,0x6580d3                    ; 005f3d7b | = "NumPad0"
    POP EBX                             ; 005f3d80
    RET                                 ; 005f3d81
    JBE 0x005f3b22                      ; 005f3d82
        ;   XREF to: 005f3b22 (CONDITIONAL_JUMP)  ; LAB_005f3b22
        ;   Label: LAB_005f3d82
    CMP EBX,0x46                        ; 005f3d88
    JNC 0x005f3da2                      ; 005f3d8b
        ;   XREF to: 005f3da2 (CONDITIONAL_JUMP)  ; LAB_005f3da2
    CMP EBX,0x43                        ; 005f3d8d
    JNC 0x005f3dd9                      ; 005f3d90
        ;   XREF to: 005f3dd9 (CONDITIONAL_JUMP)  ; LAB_005f3dd9
    CMP EBX,0x41                        ; 005f3d92
    JBE 0x005f3b29                      ; 005f3d95
        ;   XREF to: 005f3b29 (CONDITIONAL_JUMP)  ; LAB_005f3b29
    MOV EAX,0x658060                    ; 005f3d9b | = "F8"
    POP EBX                             ; 005f3da0
    RET                                 ; 005f3da1
    JBE 0x005f3b3e                      ; 005f3da2
        ;   XREF to: 005f3b3e (CONDITIONAL_JUMP)  ; LAB_005f3b3e
        ;   Label: LAB_005f3da2
    CMP EBX,0x49                        ; 005f3da8
    JNC 0x005f3dbd                      ; 005f3dab
        ;   XREF to: 005f3dbd (CONDITIONAL_JUMP)  ; LAB_005f3dbd
    CMP EBX,0x47                        ; 005f3dad
    JBE 0x005f3b45                      ; 005f3db0
        ;   XREF to: 005f3b45 (CONDITIONAL_JUMP)  ; LAB_005f3b45
    MOV EAX,0x658083                    ; 005f3db6 | = "NumPad8"
    POP EBX                             ; 005f3dbb
    RET                                 ; 005f3dbc
    JBE 0x005f3b4c                      ; 005f3dbd
        ;   XREF to: 005f3b4c (CONDITIONAL_JUMP)  ; LAB_005f3b4c
        ;   Label: LAB_005f3dbd
    CMP EBX,0x4b                        ; 005f3dc3
    JC 0x005f3b53                       ; 005f3dc6
        ;   XREF to: 005f3b53 (CONDITIONAL_JUMP)  ; LAB_005f3b53
    JBE 0x005f3b5a                      ; 005f3dcc
        ;   XREF to: 005f3b5a (CONDITIONAL_JUMP)  ; LAB_005f3b5a
    MOV EAX,0x6580a3                    ; 005f3dd2 | = "NumPad5"
    POP EBX                             ; 005f3dd7
    RET                                 ; 005f3dd8
    JBE 0x005f3b30                      ; 005f3dd9
        ;   XREF to: 005f3b30 (CONDITIONAL_JUMP)  ; LAB_005f3b30
        ;   Label: LAB_005f3dd9
    CMP EBX,0x44                        ; 005f3ddf
    JBE 0x005f3b37                      ; 005f3de2
        ;   XREF to: 005f3b37 (CONDITIONAL_JUMP)  ; LAB_005f3b37
    MOV EAX,0x65806a                    ; 005f3de8 | = "Pause"
    POP EBX                             ; 005f3ded
    RET                                 ; 005f3dee
    JBE 0x005f3b06                      ; 005f3def
        ;   XREF to: 005f3b06 (CONDITIONAL_JUMP)  ; LAB_005f3b06
        ;   Label: LAB_005f3def
    CMP EBX,0x3d                        ; 005f3df5
    JNC 0x005f3e0a                      ; 005f3df8
        ;   XREF to: 005f3e0a (CONDITIONAL_JUMP)  ; LAB_005f3e0a
    CMP EBX,0x3b                        ; 005f3dfa
    JBE 0x005f3b0d                      ; 005f3dfd
        ;   XREF to: 005f3b0d (CONDITIONAL_JUMP)  ; LAB_005f3b0d
    MOV EAX,0x65804e                    ; 005f3e03 | = "F2"
    POP EBX                             ; 005f3e08
    RET                                 ; 005f3e09
    JBE 0x005f3b14                      ; 005f3e0a
        ;   XREF to: 005f3b14 (CONDITIONAL_JUMP)  ; LAB_005f3b14
        ;   Label: LAB_005f3e0a
    CMP EBX,0x3e                        ; 005f3e10
    JBE 0x005f3b1b                      ; 005f3e13
        ;   XREF to: 005f3b1b (CONDITIONAL_JUMP)  ; LAB_005f3b1b
    MOV EAX,0x658057                    ; 005f3e19 | = "F5"
    POP EBX                             ; 005f3e1e
    RET                                 ; 005f3e1f
    JBE 0x005f3af8                      ; 005f3e20
        ;   XREF to: 005f3af8 (CONDITIONAL_JUMP)  ; LAB_005f3af8
        ;   Label: LAB_005f3e20
    CMP EBX,0x38                        ; 005f3e26
    JBE 0x005f3aff                      ; 005f3e29
        ;   XREF to: 005f3aff (CONDITIONAL_JUMP)  ; LAB_005f3aff
    MOV EAX,0x65803c                    ; 005f3e2f | = "Space"
    POP EBX                             ; 005f3e34
    RET                                 ; 005f3e35
    JBE 0x005f3a65                      ; 005f3e36
        ;   XREF to: 005f3a65 (CONDITIONAL_JUMP)  ; LAB_005f3a65
        ;   Label: LAB_005f3e36
    CMP EBX,0x26                        ; 005f3e3c
    JNC 0x005f3e63                      ; 005f3e3f
        ;   XREF to: 005f3e63 (CONDITIONAL_JUMP)  ; LAB_005f3e63
    CMP EBX,0x1f                        ; 005f3e41
    JNC 0x005f3ed9                      ; 005f3e44
        ;   XREF to: 005f3ed9 (CONDITIONAL_JUMP)  ; LAB_005f3ed9
    CMP EBX,0x1c                        ; 005f3e4a
    JNC 0x005f3f10                      ; 005f3e4d
        ;   XREF to: 005f3f10 (CONDITIONAL_JUMP)  ; LAB_005f3f10
    CMP EBX,0x1a                        ; 005f3e53
    JBE 0x005f3a6c                      ; 005f3e56
        ;   XREF to: 005f3a6c (CONDITIONAL_JUMP)  ; LAB_005f3a6c
    MOV EAX,0x657fda                    ; 005f3e5c | = "]"
    POP EBX                             ; 005f3e61
    RET                                 ; 005f3e62
    JBE 0x005f3aa4                      ; 005f3e63
        ;   XREF to: 005f3aa4 (CONDITIONAL_JUMP)  ; LAB_005f3aa4
        ;   Label: LAB_005f3e63
    CMP EBX,0x2d                        ; 005f3e69
    JNC 0x005f3e83                      ; 005f3e6c
        ;   XREF to: 005f3e83 (CONDITIONAL_JUMP)  ; LAB_005f3e83
    CMP EBX,0x29                        ; 005f3e6e
    JNC 0x005f3eba                      ; 005f3e71
        ;   XREF to: 005f3eba (CONDITIONAL_JUMP)  ; LAB_005f3eba
    CMP EBX,0x27                        ; 005f3e73
    JBE 0x005f3aab                      ; 005f3e76
        ;   XREF to: 005f3aab (CONDITIONAL_JUMP)  ; LAB_005f3aab
    MOV EAX,0x657fff                    ; 005f3e7c | = "'"
    POP EBX                             ; 005f3e81
    RET                                 ; 005f3e82
    JBE 0x005f3ac7                      ; 005f3e83
        ;   XREF to: 005f3ac7 (CONDITIONAL_JUMP)  ; LAB_005f3ac7
        ;   Label: LAB_005f3e83
    CMP EBX,0x30                        ; 005f3e89
    JNC 0x005f3e9e                      ; 005f3e8c
        ;   XREF to: 005f3e9e (CONDITIONAL_JUMP)  ; LAB_005f3e9e
    CMP EBX,0x2e                        ; 005f3e8e
    JBE 0x005f3ace                      ; 005f3e91
        ;   XREF to: 005f3ace (CONDITIONAL_JUMP)  ; LAB_005f3ace
    MOV EAX,0x658013                    ; 005f3e97 | = "V"
    POP EBX                             ; 005f3e9c
    RET                                 ; 005f3e9d
    JBE 0x005f3ad5                      ; 005f3e9e
        ;   XREF to: 005f3ad5 (CONDITIONAL_JUMP)  ; LAB_005f3ad5
        ;   Label: LAB_005f3e9e
    CMP EBX,0x32                        ; 005f3ea4
    JC 0x005f3adc                       ; 005f3ea7
        ;   XREF to: 005f3adc (CONDITIONAL_JUMP)  ; LAB_005f3adc
    JBE 0x005f3ae3                      ; 005f3ead
        ;   XREF to: 005f3ae3 (CONDITIONAL_JUMP)  ; LAB_005f3ae3
    MOV EAX,0x65801b                    ; 005f3eb3 | = ","
    POP EBX                             ; 005f3eb8
    RET                                 ; 005f3eb9
    JBE 0x005f3ab2                      ; 005f3eba
        ;   XREF to: 005f3ab2 (CONDITIONAL_JUMP)  ; LAB_005f3ab2
        ;   Label: LAB_005f3eba
    CMP EBX,0x2a                        ; 005f3ec0
    JBE 0x005f3ab9                      ; 005f3ec3
        ;   XREF to: 005f3ab9 (CONDITIONAL_JUMP)  ; LAB_005f3ab9
    CMP EBX,0x2c                        ; 005f3ec9
    JZ 0x005f3ac0                       ; 005f3ecc
        ;   XREF to: 005f3ac0 (CONDITIONAL_JUMP)  ; LAB_005f3ac0
    MOV EAX,0x65816d                    ; 005f3ed2 | = "(invalid key)"
    POP EBX                             ; 005f3ed7
    RET                                 ; 005f3ed8
    JBE 0x005f3a81                      ; 005f3ed9
        ;   XREF to: 005f3a81 (CONDITIONAL_JUMP)  ; LAB_005f3a81
        ;   Label: LAB_005f3ed9
    CMP EBX,0x22                        ; 005f3edf
    JNC 0x005f3ef4                      ; 005f3ee2
        ;   XREF to: 005f3ef4 (CONDITIONAL_JUMP)  ; LAB_005f3ef4
    CMP EBX,0x20                        ; 005f3ee4
    JBE 0x005f3a88                      ; 005f3ee7
        ;   XREF to: 005f3a88 (CONDITIONAL_JUMP)  ; LAB_005f3a88
    MOV EAX,0x657ff1                    ; 005f3eed | = "F"
    POP EBX                             ; 005f3ef2
    RET                                 ; 005f3ef3
    JBE 0x005f3a8f                      ; 005f3ef4
        ;   XREF to: 005f3a8f (CONDITIONAL_JUMP)  ; LAB_005f3a8f
        ;   Label: LAB_005f3ef4
    CMP EBX,0x24                        ; 005f3efa
    JC 0x005f3a96                       ; 005f3efd
        ;   XREF to: 005f3a96 (CONDITIONAL_JUMP)  ; LAB_005f3a96
    JBE 0x005f3a9d                      ; 005f3f03
        ;   XREF to: 005f3a9d (CONDITIONAL_JUMP)  ; LAB_005f3a9d
    MOV EAX,0x657ff9                    ; 005f3f09 | = "K"
    POP EBX                             ; 005f3f0e
    RET                                 ; 005f3f0f
    JBE 0x005f3a73                      ; 005f3f10
        ;   XREF to: 005f3a73 (CONDITIONAL_JUMP)  ; LAB_005f3a73
        ;   Label: LAB_005f3f10
    CMP EBX,0x1d                        ; 005f3f16
    JBE 0x005f3a7a                      ; 005f3f19
        ;   XREF to: 005f3a7a (CONDITIONAL_JUMP)  ; LAB_005f3a7a
    MOV EAX,0x657feb                    ; 005f3f1f | = "A"
    POP EBX                             ; 005f3f24
    RET                                 ; 005f3f25
    JBE 0x005f3a26                      ; 005f3f26
        ;   XREF to: 005f3a26 (CONDITIONAL_JUMP)  ; LAB_005f3a26
        ;   Label: LAB_005f3f26
    CMP EBX,0x12                        ; 005f3f2c
    JNC 0x005f3f46                      ; 005f3f2f
        ;   XREF to: 005f3f46 (CONDITIONAL_JUMP)  ; LAB_005f3f46
    CMP EBX,0xf                         ; 005f3f31
    JNC 0x005f3f7d                      ; 005f3f34
        ;   XREF to: 005f3f7d (CONDITIONAL_JUMP)  ; LAB_005f3f7d
    CMP EBX,0xd                         ; 005f3f36
    JBE 0x005f3a2d                      ; 005f3f39
        ;   XREF to: 005f3a2d (CONDITIONAL_JUMP)  ; LAB_005f3a2d
    MOV EAX,0x657fb6                    ; 005f3f3f | = "BackSpace"
    POP EBX                             ; 005f3f44
    RET                                 ; 005f3f45
    JBE 0x005f3a42                      ; 005f3f46
        ;   XREF to: 005f3a42 (CONDITIONAL_JUMP)  ; LAB_005f3a42
        ;   Label: LAB_005f3f46
    CMP EBX,0x15                        ; 005f3f4c
    JNC 0x005f3f61                      ; 005f3f4f
        ;   XREF to: 005f3f61 (CONDITIONAL_JUMP)  ; LAB_005f3f61
    CMP EBX,0x13                        ; 005f3f51
    JBE 0x005f3a49                      ; 005f3f54
        ;   XREF to: 005f3a49 (CONDITIONAL_JUMP)  ; LAB_005f3a49
    MOV EAX,0x657fcc                    ; 005f3f5a | = "T"
    POP EBX                             ; 005f3f5f
    RET                                 ; 005f3f60
    JBE 0x005f3a50                      ; 005f3f61
        ;   XREF to: 005f3a50 (CONDITIONAL_JUMP)  ; LAB_005f3a50
        ;   Label: LAB_005f3f61
    CMP EBX,0x17                        ; 005f3f67
    JC 0x005f3a57                       ; 005f3f6a
        ;   XREF to: 005f3a57 (CONDITIONAL_JUMP)  ; LAB_005f3a57
    JBE 0x005f3a5e                      ; 005f3f70
        ;   XREF to: 005f3a5e (CONDITIONAL_JUMP)  ; LAB_005f3a5e
    MOV EAX,0x657fd4                    ; 005f3f76 | = "O"
    POP EBX                             ; 005f3f7b
    RET                                 ; 005f3f7c
    JBE 0x005f3a34                      ; 005f3f7d
        ;   XREF to: 005f3a34 (CONDITIONAL_JUMP)  ; LAB_005f3a34
        ;   Label: LAB_005f3f7d
    CMP EBX,0x10                        ; 005f3f83
    JBE 0x005f3a3b                      ; 005f3f86
        ;   XREF to: 005f3a3b (CONDITIONAL_JUMP)  ; LAB_005f3a3b
    MOV EAX,0x657fc6                    ; 005f3f8c | = "W"
    POP EBX                             ; 005f3f91
    RET                                 ; 005f3f92
    JBE 0x005f3a0a                      ; 005f3f93
        ;   XREF to: 005f3a0a (CONDITIONAL_JUMP)  ; LAB_005f3a0a
        ;   Label: LAB_005f3f93
    CMP EBX,0x9                         ; 005f3f99
    JNC 0x005f3fae                      ; 005f3f9c
        ;   XREF to: 005f3fae (CONDITIONAL_JUMP)  ; LAB_005f3fae
    CMP EBX,0x7                         ; 005f3f9e
    JBE 0x005f3a11                      ; 005f3fa1
        ;   XREF to: 005f3a11 (CONDITIONAL_JUMP)  ; LAB_005f3a11
    MOV EAX,0x657faa                    ; 005f3fa7 | = "7"
    POP EBX                             ; 005f3fac
    RET                                 ; 005f3fad
    JBE 0x005f3a18                      ; 005f3fae
        ;   XREF to: 005f3a18 (CONDITIONAL_JUMP)  ; LAB_005f3a18
        ;   Label: LAB_005f3fae
    CMP EBX,0xa                         ; 005f3fb4
    JBE 0x005f3a1f                      ; 005f3fb7
        ;   XREF to: 005f3a1f (CONDITIONAL_JUMP)  ; LAB_005f3a1f
    MOV EAX,0x657fb0                    ; 005f3fbd | = "0"
    POP EBX                             ; 005f3fc2
    RET                                 ; 005f3fc3
    JBE 0x005f39fc                      ; 005f3fc4
        ;   XREF to: 005f39fc (CONDITIONAL_JUMP)  ; LAB_005f39fc
        ;   Label: LAB_005f3fc4
    CMP EBX,0x4                         ; 005f3fca
    JBE 0x005f3a03                      ; 005f3fcd
        ;   XREF to: 005f3a03 (CONDITIONAL_JUMP)  ; LAB_005f3a03
    MOV EAX,0x657fa4                    ; 005f3fd3 | = "4"
    POP EBX                             ; 005f3fd8
    RET                                 ; 005f3fd9

