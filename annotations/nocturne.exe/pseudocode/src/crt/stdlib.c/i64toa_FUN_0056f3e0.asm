; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * crt_stdlib_c_i64toa_FUN_0056f3e0(ulonglong *param_1,char *param_2,int param_3)
;
; Local Variables:
; undefined1       Stack[-0x54]:1  local_54
; undefined        Stack[-0x53]:1  local_53
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   FUN_00569928 at 00569d58
;   FUN_0056f480 at 0056f4dc
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_005c1ff0
;
; Called Functions:
;   crt_math.c_udivmod64_FUN_00571a9d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f3e0
        ;   Label: crt_stdlib.c_i64toa_FUN_0056f3e0
    PUSH ESI                            ; 0056f3e1
    PUSH EDI                            ; 0056f3e2
    PUSH ES                             ; 0056f3e3
    PUSH EBP                            ; 0056f3e4
    SUB ESP,0x40                        ; 0056f3e5
    MOV ESI,dword ptr [ESP + 0x58]      ; 0056f3e8
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0056f3ec
    LEA EDI,[ESP + 0x34]                ; 0056f3f0
    MOV dword ptr [ESP + 0x3c],EAX      ; 0056f3f4
    MOV AX,DS                           ; 0056f3f8
    LEA EBP,[ESP + 0x1]                 ; 0056f3fa
    MOV ES,AX                           ; 0056f3fe
    XOR EDX,EDX                         ; 0056f400
    MOV EAX,dword ptr [ESP + 0x60]      ; 0056f402
    MOVSD ES:EDI,ESI                    ; 0056f406
    MOVSD ES:EDI,ESI                    ; 0056f407
    MOV dword ptr [ESP + 0x2c],EAX      ; 0056f408
    XOR AH,AH                           ; 0056f40c
    MOV dword ptr [ESP + 0x30],EDX      ; 0056f40e
    MOV byte ptr [ESP],AH               ; 0056f412
    LEA EDI,[ESP + 0x24]                ; 0056f415
        ;   Label: LAB_0056f415
    LEA ESI,[ESP + 0x34]                ; 0056f419
    LEA EBX,[ESP + 0x2c]                ; 0056f41d
    LEA EAX,[ESP + 0x34]                ; 0056f421
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056f425
    MOV EAX,dword ptr [EAX]             ; 0056f428
    MOV ECX,dword ptr [EBX + 0x4]       ; 0056f42a
    MOV EBX,dword ptr [EBX]             ; 0056f42d
    CALL crt_math.c_udivmod64_FUN_00571a9d ; 0056f42f
        ;   XREF to: 00571a9d (UNCONDITIONAL_CALL)  ; ulonglong crt_math.c_udivmod64_FUN_00571a9d(ulonglong dividend, ulonglong divisor)
    MOV dword ptr [ESI + 0x4],EDX       ; 0056f434
    MOV dword ptr [ESI],EAX             ; 0056f437
    MOV dword ptr [EDI + 0x4],ECX       ; 0056f439
    MOV dword ptr [EDI],EBX             ; 0056f43c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056f43e
    MOV AL,byte ptr [EAX + 0x5c1ff0]    ; 0056f442 | = "0123456789abcdefghijklmnopqrstuvwxyz"
    MOV byte ptr [EBP],AL               ; 0056f448
    MOV EBX,dword ptr [ESP + 0x34]      ; 0056f44b
    INC EBP                             ; 0056f44f
    TEST EBX,EBX                        ; 0056f450
    JNZ 0x0056f415                      ; 0056f452
        ;   XREF to: 0056f415 (CONDITIONAL_JUMP)  ; LAB_0056f415
    CMP dword ptr [ESP + 0x38],0x0      ; 0056f454
    JNZ 0x0056f415                      ; 0056f459
        ;   XREF to: 0056f415 (CONDITIONAL_JUMP)  ; LAB_0056f415
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0056f45b
        ;   Label: LAB_0056f45b
    MOV AL,byte ptr [EBP + -0x1]        ; 0056f45f
    DEC EBP                             ; 0056f462
    LEA ESI,[EBX + 0x1]                 ; 0056f463
    MOV byte ptr [EBX],AL               ; 0056f466
    MOV dword ptr [ESP + 0x3c],ESI      ; 0056f468
    TEST AL,AL                          ; 0056f46c
    JNZ 0x0056f45b                      ; 0056f46e
        ;   XREF to: 0056f45b (CONDITIONAL_JUMP)  ; LAB_0056f45b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0056f470
    ADD ESP,0x40                        ; 0056f474
    POP EBP                             ; 0056f477
    POP ES                              ; 0056f478
    POP EDI                             ; 0056f479
    POP ESI                             ; 0056f47a
    POP EBX                             ; 0056f47b
    RET                                 ; 0056f47c

