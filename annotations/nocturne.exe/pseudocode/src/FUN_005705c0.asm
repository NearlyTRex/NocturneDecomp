; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005705c0(int param_1)
;
;
; XREF[3]:
;   FUN_0056b960 at 0056bb35
;   FUN_0056bbb0 at 0056bbbf
;   FUN_0056f220 at 0056f257
;
; Referenced Globals:
;   void* PTR_GetFileType_00575514 = 00175d4e
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;   undefined4 DAT_005c1d54
;   undefined4 DAT_005c1f54
;
; Called Functions:
;   FUN_005671e4
;   GetFileType
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005705c0
        ;   Label: FUN_005705c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005705c1
    PUSH EBX                            ; 005705c5
    CALL dword ptr [0x005c1ac0]         ; 005705c6 | PTR_FUN_005c1ac0
    MOV EDX,dword ptr [0x005c1d54]      ; 005705cc | DAT_005c1d54
    ADD ESP,0x4                         ; 005705d2
    TEST EDX,EDX                        ; 005705d5
    JZ 0x005705f8                       ; 005705d7
        ;   XREF to: 005705f8 (CONDITIONAL_JUMP)  ; LAB_005705f8
    PUSH EBX                            ; 005705d9
    CALL dword ptr [0x005c1d54]         ; 005705da | DAT_005c1d54
    ADD ESP,0x4                         ; 005705e0
    TEST EAX,EAX                        ; 005705e3
    JZ 0x005705f8                       ; 005705e5
        ;   XREF to: 005705f8 (CONDITIONAL_JUMP)  ; LAB_005705f8
    PUSH EBX                            ; 005705e7
    CALL dword ptr [0x005c1ac4]         ; 005705e8 | PTR_FUN_005c1ac4
    MOV EAX,0x1                         ; 005705ee
    ADD ESP,0x4                         ; 005705f3
    POP EBX                             ; 005705f6
    RET                                 ; 005705f7
    MOV EAX,[0x005c1f54]                ; 005705f8 | DAT_005c1f54
        ;   Label: LAB_005705f8
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 005705fd
    PUSH EAX                            ; 00570600
    CALL dword ptr CS:[0x575514]        ; 00570601 | PTR_GetFileType_00575514
    CMP EAX,0x2                         ; 00570608
    JNZ 0x0057061e                      ; 0057060b
        ;   XREF to: 0057061e (CONDITIONAL_JUMP)  ; LAB_0057061e
    PUSH EBX                            ; 0057060d
    CALL dword ptr [0x005c1ac4]         ; 0057060e | PTR_FUN_005c1ac4
    MOV EAX,0x1                         ; 00570614
    ADD ESP,0x4                         ; 00570619
    POP EBX                             ; 0057061c
    RET                                 ; 0057061d
    PUSH EBX                            ; 0057061e
        ;   Label: LAB_0057061e
    CALL dword ptr [0x005c1ac4]         ; 0057061f | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 00570625
    XOR EAX,EAX                         ; 00570628
    POP EBX                             ; 0057062a
    RET                                 ; 0057062b

