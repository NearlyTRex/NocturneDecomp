; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_005306e0(undefined4 param_1,int param_2)
;
;
; XREF[3]:
;   core_charactr.cpp_FUN_004268b0 at 00426943
;   core_shadow.cpp_FUN_0053e6c0 at 0053e7fb
;   unkafter_cross.cpp_FUN_005a6bc0 at 005a6ccd
;
; Referenced Globals:
;   undefined4 DAT_01fc961c
;
; Called Functions:
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005306e0
        ;   Label: core_set.cpp_FUN_005306e0
    PUSH ESI                            ; 005306e1
    PUSH EDI                            ; 005306e2
    PUSH EBP                            ; 005306e3
    MOV ESI,dword ptr [ESP + 0x18]      ; 005306e4
    MOV EDX,dword ptr [0x01fc961c]      ; 005306e8 | DAT_01fc961c
    XOR ECX,ECX                         ; 005306ee
    TEST EDX,EDX                        ; 005306f0
    JLE 0x00530711                      ; 005306f2
        ;   XREF to: 00530711 (CONDITIONAL_JUMP)  ; LAB_00530711
    LEA EBX,[EDX*0x4 + 0x0]             ; 005306f4
    XOR EAX,EAX                         ; 005306fb
    MOV EDI,dword ptr [EAX + 0x1fc9620] ; 005306fd
        ;   Label: LAB_005306fd
    LEA EDX,[EAX + 0x4]                 ; 00530703
    CMP ESI,EDI                         ; 00530706
    JZ 0x00530716                       ; 00530708
        ;   XREF to: 00530716 (CONDITIONAL_JUMP)  ; LAB_00530716
    MOV EAX,EDX                         ; 0053070a
    INC ECX                             ; 0053070c
    CMP EDX,EBX                         ; 0053070d
    JL 0x005306fd                       ; 0053070f
        ;   XREF to: 005306fd (CONDITIONAL_JUMP)  ; LAB_005306fd
    POP EBP                             ; 00530711
        ;   Label: LAB_00530711
    POP EDI                             ; 00530712
    POP ESI                             ; 00530713
    POP EBX                             ; 00530714
    RET                                 ; 00530715
    MOV EBP,dword ptr [0x01fc961c]      ; 00530716 | DAT_01fc961c
        ;   Label: LAB_00530716
    DEC EBP                             ; 0053071c
    MOV EBX,EBP                         ; 0053071d
    SUB EBX,ECX                         ; 0053071f
    LEA ECX,[EBX*0x4 + 0x0]             ; 00530721
    PUSH ECX                            ; 00530728
    ADD EDX,0x1fc9620                   ; 00530729
    PUSH EDX                            ; 0053072f
    ADD EAX,0x1fc9620                   ; 00530730
    PUSH EAX                            ; 00530735
    MOV dword ptr [0x01fc961c],EBP      ; 00530736 | DAT_01fc961c
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0053073c
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00530741
    POP EBP                             ; 00530744
    POP EDI                             ; 00530745
    POP ESI                             ; 00530746
    POP EBX                             ; 00530747
    RET                                 ; 00530748

