; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00493040(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f6420
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493040
        ;   Label: FUN_00493040
    MOV EBX,dword ptr [ESP + 0x8]       ; 00493041
    TEST byte ptr [ESP + 0xc],0x4       ; 00493045
    JNZ 0x00493066                      ; 0049304a
        ;   XREF to: 00493066 (CONDITIONAL_JUMP)  ; LAB_00493066
    PUSH 0x1                            ; 0049304c
    PUSH EBX                            ; 0049304e
    CALL FUN_00408930                   ; 0049304f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 00493054
    MOV DL,byte ptr [ESP + 0xc]         ; 00493057
    MOV EBX,EAX                         ; 0049305b
    TEST DL,0x2                         ; 0049305d
    JNZ 0x00493081                      ; 00493060
        ;   XREF to: 00493081 (CONDITIONAL_JUMP)  ; LAB_00493081
    MOV EAX,EBX                         ; 00493062
    POP EBX                             ; 00493064
    RET                                 ; 00493065
    PUSH 0x5f6420                       ; 00493066 | DAT_005f6420
        ;   Label: LAB_00493066
    PUSH EBX                            ; 0049306b
    CALL FUN_005b7fa7                   ; 0049306c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00493071
    PUSH EAX                            ; 00493074
    CALL FUN_005b7fce                   ; 00493075
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0049307a
    MOV EAX,EBX                         ; 0049307d
    POP EBX                             ; 0049307f
    RET                                 ; 00493080
    PUSH EAX                            ; 00493081
        ;   Label: LAB_00493081
    CALL FUN_005b7fdc                   ; 00493082
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00493087
    MOV EAX,EBX                         ; 0049308a
    POP EBX                             ; 0049308c
    RET                                 ; 0049308d

