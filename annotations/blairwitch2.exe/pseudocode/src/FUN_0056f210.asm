; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056f210(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc390
;
; Called Functions:
;   FUN_004ce3d0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f210
        ;   Label: FUN_0056f210
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f211
    TEST byte ptr [ESP + 0xc],0x4       ; 0056f215
    JNZ 0x0056f236                      ; 0056f21a
        ;   XREF to: 0056f236 (CONDITIONAL_JUMP)  ; LAB_0056f236
    PUSH 0x1                            ; 0056f21c
    PUSH EBX                            ; 0056f21e
    CALL FUN_004ce3d0                   ; 0056f21f
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce3d0()
    ADD ESP,0x8                         ; 0056f224
    MOV DL,byte ptr [ESP + 0xc]         ; 0056f227
    MOV EBX,EAX                         ; 0056f22b
    TEST DL,0x2                         ; 0056f22d
    JNZ 0x0056f251                      ; 0056f230
        ;   XREF to: 0056f251 (CONDITIONAL_JUMP)  ; LAB_0056f251
    MOV EAX,EBX                         ; 0056f232
    POP EBX                             ; 0056f234
    RET                                 ; 0056f235
    PUSH 0x5fc390                       ; 0056f236 | DAT_005fc390
        ;   Label: LAB_0056f236
    PUSH EBX                            ; 0056f23b
    CALL FUN_005b7fa7                   ; 0056f23c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0056f241
    PUSH EAX                            ; 0056f244
    CALL FUN_005b7fce                   ; 0056f245
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0056f24a
    MOV EAX,EBX                         ; 0056f24d
    POP EBX                             ; 0056f24f
    RET                                 ; 0056f250
    PUSH EAX                            ; 0056f251
        ;   Label: LAB_0056f251
    CALL FUN_005b7fdc                   ; 0056f252
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0056f257
    MOV EAX,EBX                         ; 0056f25a
    POP EBX                             ; 0056f25c
    RET                                 ; 0056f25d

