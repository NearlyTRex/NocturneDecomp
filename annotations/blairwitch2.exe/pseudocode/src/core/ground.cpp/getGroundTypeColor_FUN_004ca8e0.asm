; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_ground_cpp_getGroundTypeColor_FUN_004ca8e0(undefined4 param_1)
;
;
; Referenced Globals:
;   void* switchdataD_004ca8a8 = 004ca8f1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ca8e0
        ;   Label: core_ground.cpp_getGroundTypeColor_FUN_004ca8e0
    DEC EAX                             ; 004ca8e4
    CMP EAX,0xc                         ; 004ca8e5
    JA 0x004ca933                       ; 004ca8e8
        ;   XREF to: 004ca933 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4ca8a8]  ; 004ca8ea | caseD_1 | caseD_5 | caseD_3
        ;   Label: switchD
    MOV EAX,0x5                         ; 004ca8f1
        ;   Label: caseD_1
    RET                                 ; 004ca8f6
    MOV EAX,0xf8                        ; 004ca8f7
        ;   Label: caseD_2
    RET                                 ; 004ca8fc
    MOV EAX,0x2                         ; 004ca8fd
        ;   Label: caseD_3
    RET                                 ; 004ca902
    MOV EAX,0xfa                        ; 004ca903
        ;   Label: caseD_4
    RET                                 ; 004ca908
    MOV EAX,0x4                         ; 004ca909
        ;   Label: caseD_6
    RET                                 ; 004ca90e
    MOV EAX,0x3                         ; 004ca90f
        ;   Label: caseD_7
    RET                                 ; 004ca914
    MOV EAX,0x6                         ; 004ca915
        ;   Label: caseD_8
    RET                                 ; 004ca91a
    MOV EAX,0x1                         ; 004ca91b
        ;   Label: caseD_9
    RET                                 ; 004ca920
    MOV EAX,0xf9                        ; 004ca921
        ;   Label: caseD_a
    RET                                 ; 004ca926
    MOV EAX,0xfc                        ; 004ca927
        ;   Label: caseD_c
    RET                                 ; 004ca92c
    MOV EAX,0x7                         ; 004ca92d
        ;   Label: caseD_d
    RET                                 ; 004ca932
    MOV EAX,0xfd                        ; 004ca933
        ;   Label: default
    RET                                 ; 004ca938

