; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_trstream_cpp_CInStreamMemory_read_FUN_005742f0(CInStreamMemory *this_ptr,undefined4 *param_2,uint param_3)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; undefined4 *     Stack[0x8]:4   param_2
; uint             Stack[0xc]:4   param_3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005742f0
        ;   Label: support_trstream.cpp_CInStreamMemory_read_FUN_005742f0
    PUSH ESI                            ; 005742f1
    PUSH EBP                            ; 005742f2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005742f3
    MOV EBX,dword ptr [ESP + 0x18]      ; 005742f7
    CMP dword ptr [EDX + 0x4],0x0       ; 005742fb
    JZ 0x0057433d                       ; 005742ff
        ;   XREF to: 0057433d (CONDITIONAL_JUMP)  ; LAB_0057433d
    MOV ESI,dword ptr [EDX + 0x8]       ; 00574301
    CMP ESI,dword ptr [EDX + 0xc]       ; 00574304
    JLE 0x00574346                      ; 00574307
        ;   XREF to: 00574346 (CONDITIONAL_JUMP)  ; LAB_00574346
    MOV EAX,ESI                         ; 00574309
    SUB EAX,dword ptr [EDX + 0xc]       ; 0057430b
    CMP EBX,EAX                         ; 0057430e
    JLE 0x00574314                      ; 00574310
        ;   XREF to: 00574314 (CONDITIONAL_JUMP)  ; LAB_00574314
    MOV EBX,EAX                         ; 00574312
    PUSH EDI                            ; 00574314
        ;   Label: LAB_00574314
    MOV EDI,dword ptr [ESP + 0x18]      ; 00574315
    MOV ESI,dword ptr [EDX + 0x4]       ; 00574319
    MOV EBP,dword ptr [EDX + 0xc]       ; 0057431c
    MOV ECX,EBX                         ; 0057431f
    ADD ESI,EBP                         ; 00574321
    PUSH EDI                            ; 00574323
    MOV EAX,ECX                         ; 00574324
    SHR ECX,0x2                         ; 00574326
    MOVSD.REP ES:EDI,ESI                ; 00574329
    MOV CL,AL                           ; 0057432b
    AND CL,0x3                          ; 0057432d
    MOVSB.REP ES:EDI,ESI                ; 00574330
    POP EDI                             ; 00574332
    ADD dword ptr [EDX + 0xc],EBX       ; 00574333
    MOV EAX,EBX                         ; 00574336
    POP EDI                             ; 00574338
    POP EBP                             ; 00574339
    POP ESI                             ; 0057433a
    POP EBX                             ; 0057433b
    RET                                 ; 0057433c
    MOV EAX,0xfffffffe                  ; 0057433d
        ;   Label: LAB_0057433d
    POP EBP                             ; 00574342
    POP ESI                             ; 00574343
    POP EBX                             ; 00574344
    RET                                 ; 00574345
    MOV EAX,0xffffffff                  ; 00574346
        ;   Label: LAB_00574346
    POP EBP                             ; 0057434b
    POP ESI                             ; 0057434c
    POP EBX                             ; 0057434d
    RET                                 ; 0057434e

