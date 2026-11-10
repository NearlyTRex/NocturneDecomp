; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setcolid_cpp_FUN_00559350(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_process_FUN_00419740 at 00419920
;   core_boxactor.cpp_CBoxActor_process_FUN_00422000 at 004224de
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559350
        ;   Label: core_setcolid.cpp_FUN_00559350
    PUSH EBP                            ; 00559351
    SUB ESP,0x3c                        ; 00559352
    MOV EAX,dword ptr [ESP + 0x48]      ; 00559355
    MOV EDX,dword ptr [EAX + 0x14f0a8]  ; 00559359
    XOR EBX,EBX                         ; 0055935f
    TEST EDX,EDX                        ; 00559361
    JLE 0x005593b3                      ; 00559363
        ;   XREF to: 005593b3 (CONDITIONAL_JUMP)  ; LAB_005593b3
    PUSH EDI                            ; 00559365
    PUSH ESI                            ; 00559366
    MOV EBP,EAX                         ; 00559367
    MOV ECX,0xf                         ; 00559369
        ;   Label: LAB_00559369
    LEA EDI,[ESP + 0x8]                 ; 0055936e
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00559372
    MOV EAX,dword ptr [EBP + 0x14f0ac]  ; 00559376
    MOVSD.REP ES:EDI,ESI                ; 0055937c
    PUSH 0x0                            ; 0055937e
    LEA ECX,[ESP + 0xc]                 ; 00559380
    PUSH ECX                            ; 00559384
    MOV ECX,dword ptr [ESP + 0x60]      ; 00559385
    PUSH ECX                            ; 00559389
    MOV ESI,dword ptr [ESP + 0x60]      ; 0055938a
    PUSH ESI                            ; 0055938e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0055938f
    PUSH EAX                            ; 00559395
    CALL dword ptr [EDX + 0x104]        ; 00559396
    ADD ESP,0x14                        ; 0055939c
    MOV EAX,dword ptr [ESP + 0x50]      ; 0055939f
    INC EBX                             ; 005593a3
    MOV EDI,dword ptr [EAX + 0x14f0a8]  ; 005593a4
    ADD EBP,0x4                         ; 005593aa
    CMP EBX,EDI                         ; 005593ad
    JL 0x00559369                       ; 005593af
        ;   XREF to: 00559369 (CONDITIONAL_JUMP)  ; LAB_00559369
    POP ESI                             ; 005593b1
    POP EDI                             ; 005593b2
    ADD ESP,0x3c                        ; 005593b3
        ;   Label: LAB_005593b3
    POP EBP                             ; 005593b6
    POP EBX                             ; 005593b7
    RET                                 ; 005593b8

