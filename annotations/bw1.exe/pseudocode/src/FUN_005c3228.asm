; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005c3228(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   FUN_005ca282
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c3228
        ;   Label: FUN_005c3228
    MOV EBP,ESP                         ; 005c3229
    SUB ESP,0x10                        ; 005c322b
    PUSH 0x0                            ; 005c322e
    MOV EDX,dword ptr [EBP + 0x8]       ; 005c3230
    PUSH EDX                            ; 005c3233
    CALL FUN_005ca282                   ; 005c3234
        ;   XREF to: 005ca282 (UNCONDITIONAL_CALL)  ; undefined FUN_005ca282()
    MOV dword ptr [EBP + -0x10],EAX     ; 005c3239
    MOV dword ptr [EBP + -0xc],EDX      ; 005c323c
    ADD ESP,0x8                         ; 005c323f
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c3242
    MOV dword ptr [EBP + -0x8],EAX      ; 005c3245
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c3248
    MOV dword ptr [EBP + -0x4],EAX      ; 005c324b
    MOV EAX,dword ptr [EBP + -0x8]      ; 005c324e
    MOV EDX,dword ptr [EBP + -0x4]      ; 005c3251
    MOV ESP,EBP                         ; 005c3254
    POP EBP                             ; 005c3256
    RET                                 ; 005c3257

