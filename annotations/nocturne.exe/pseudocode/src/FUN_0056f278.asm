; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056f278(int param_1,uint param_2)
;
;
; XREF[4]:
;   FUN_005689c0 at 00568a09
;   FUN_00568a50 at 00568ae2
;   FUN_0056b960 at 0056bb8f
;   FUN_00572f40 at 00572f92
;
; Referenced Globals:
;   undefined4 DAT_005c1f94
;   void* PTR_DAT_005c1fe4 = 005c1f94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f278
        ;   Label: FUN_0056f278
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056f279
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056f27d
    SHL EAX,0x2                         ; 0056f281
    TEST EDX,EDX                        ; 0056f284
    JZ 0x0056f296                       ; 0056f286
        ;   XREF to: 0056f296 (CONDITIONAL_JUMP)  ; LAB_0056f296
    MOV EBX,dword ptr [0x005c1fe4]      ; 0056f288 | PTR_DAT_005c1fe4
    OR DH,0x40                          ; 0056f28e
    MOV dword ptr [EBX + EAX*0x1],EDX   ; 0056f291 | DAT_005c1f94
    POP EBX                             ; 0056f294
    RET                                 ; 0056f295
    MOV EBX,dword ptr [0x005c1fe4]      ; 0056f296 | PTR_DAT_005c1fe4
        ;   Label: LAB_0056f296
    MOV dword ptr [EBX + EAX*0x1],EDX   ; 0056f29c | DAT_005c1f94
    POP EBX                             ; 0056f29f
    RET                                 ; 0056f2a0

