; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint core_ground.cpp_getGroundTypeColor_FUN_004eee20(int type)
;
; Parameters:
; int              Stack[0x4]:4   type
;
; Referenced Globals:
;   void* switchdataD_004eede0 = 004eee31
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eee20
        ;   Label: core_ground.cpp_getGroundTypeColor_FUN_004eee20
    DEC EAX                             ; 004eee24
    CMP EAX,0xc                         ; 004eee25
    JA 0x004eee73                       ; 004eee28 | default
        ;   XREF to: 004eee73 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x4eede0]  ; 004eee2a | void * switchdataD_004eede0
        ;   Label: switchD
    MOV EAX,0x5                         ; 004eee31
        ;   Label: caseD_1
    RET                                 ; 004eee36
    MOV EAX,0xf8                        ; 004eee37
        ;   Label: caseD_5
    RET                                 ; 004eee3c
    MOV EAX,0x2                         ; 004eee3d
        ;   Label: caseD_3
    RET                                 ; 004eee42
    MOV EAX,0xfa                        ; 004eee43
        ;   Label: caseD_4
    RET                                 ; 004eee48
    MOV EAX,0x4                         ; 004eee49
        ;   Label: caseD_6
    RET                                 ; 004eee4e
    MOV EAX,0x3                         ; 004eee4f
        ;   Label: caseD_7
    RET                                 ; 004eee54
    MOV EAX,0x6                         ; 004eee55
        ;   Label: caseD_8
    RET                                 ; 004eee5a
    MOV EAX,0x1                         ; 004eee5b
        ;   Label: caseD_b
    RET                                 ; 004eee60
    MOV EAX,0xf9                        ; 004eee61
        ;   Label: caseD_a
    RET                                 ; 004eee66
    MOV EAX,0xfc                        ; 004eee67
        ;   Label: caseD_c
    RET                                 ; 004eee6c
    MOV EAX,0x7                         ; 004eee6d
        ;   Label: caseD_d
    RET                                 ; 004eee72
    MOV EAX,0xfd                        ; 004eee73
        ;   Label: default
    RET                                 ; 004eee78

