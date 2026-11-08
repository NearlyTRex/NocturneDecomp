; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c71d4(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005c10e8 at 005c1127
;
; Referenced Globals:
;   undefined4 DAT_00626220
;   void* PTR_FUN_00626618 = 005c50d4
;   void* PTR_FUN_00626620 = 005c50d4
;
; Called Functions:
;   FUN_005c50d4
;   FUN_005c7018
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c71d4
        ;   Label: FUN_005c71d4
    SUB ESP,0x4                         ; 005c71d5
    CALL dword ptr [0x00626618]         ; 005c71d8 | PTR_FUN_00626618
    MOV EAX,ESP                         ; 005c71de
    PUSH EAX                            ; 005c71e0
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c71e1
    PUSH EDX                            ; 005c71e5
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c71e6
    PUSH EBX                            ; 005c71ea
    MOV EAX,0x626220                    ; 005c71eb | DAT_00626220
    MOV DX,DS                           ; 005c71f0
    XOR EAX,EAX                         ; 005c71f2
    MOV AX,DX                           ; 005c71f4
    PUSH EAX                            ; 005c71f7
    CALL FUN_005c7018                   ; 005c71f8
        ;   XREF to: 005c7018 (UNCONDITIONAL_CALL)  ; undefined FUN_005c7018()
    ADD ESP,0x10                        ; 005c71fd
    TEST EAX,EAX                        ; 005c7200
    JNZ 0x005c7211                      ; 005c7202
        ;   XREF to: 005c7211 (CONDITIONAL_JUMP)  ; LAB_005c7211
    CALL dword ptr [0x00626620]         ; 005c7204 | PTR_FUN_00626620
    MOV EAX,EBX                         ; 005c720a
    ADD ESP,0x4                         ; 005c720c
    POP EBX                             ; 005c720f
    RET                                 ; 005c7210
    CALL dword ptr [0x00626620]         ; 005c7211 | PTR_FUN_00626620
        ;   Label: LAB_005c7211
    XOR EAX,EAX                         ; 005c7217
    ADD ESP,0x4                         ; 005c7219
    POP EBX                             ; 005c721c
    RET                                 ; 005c721d

