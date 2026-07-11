; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b327(int param_1,uint param_2)
;
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
;
; XREF[12]:
;   FUN_00564ce5 at 00564d4d
;   FUN_00565a13 at 00565a8c
;   FUN_00565e59 at 00565e7e
;   FUN_00565e94 at 00565ea9
;   FUN_00565eb5 at 00565ef1
;   FUN_00565f14 at 00565f57
;   FUN_0056b227 at 0056b278
;   FUN_0056b2b4 at 0056b313
;   FUN_0056b3c2 at 0056b3f9
;   FUN_0056b75d at 0056b7ee
;   ... and 2 more
;
; Called Functions:
;   FUN_0056fddd
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b327
        ;   Label: FUN_0056b327
    SUB ESP,0x4                         ; 0056b328
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056b32b
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056b32f
    MOV ECX,dword ptr [EAX + 0x10]      ; 0056b333
    OR ECX,EDX                          ; 0056b336
    MOV EBX,dword ptr [EAX + 0x14]      ; 0056b338
    MOV EDX,ECX                         ; 0056b33b
    MOV dword ptr [EAX + 0x10],ECX      ; 0056b33d
    AND EDX,EBX                         ; 0056b340
    JNZ 0x0056b349                      ; 0056b342
        ;   XREF to: 0056b349 (CONDITIONAL_JUMP)  ; LAB_0056b349
    ADD ESP,0x4                         ; 0056b344
    POP EBX                             ; 0056b347
    RET                                 ; 0056b348
    PUSH EDX                            ; 0056b349
        ;   Label: LAB_0056b349
    LEA EAX,[ESP + 0x4]                 ; 0056b34a
    PUSH EAX                            ; 0056b34e
    CALL FUN_0056fddd                   ; 0056b34f
        ;   XREF to: 0056fddd (UNCONDITIONAL_CALL)  ; undefined FUN_0056fddd()
    ADD ESP,0x8                         ; 0056b354
    ADD ESP,0x4                         ; 0056b357
    POP EBX                             ; 0056b35a
    RET                                 ; 0056b35b

