; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_005797d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_0060b010
;   undefined4 DAT_0072ffac
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02d0bcf0
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_malloc_FUN_005a3650
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005797d0
        ;   Label: wincore_wddvmem.cpp_FUN_005797d0
    PUSH EBP                            ; 005797d1
    MOV ECX,dword ptr [0x005fba18]      ; 005797d2 | DAT_005fba18
    IMUL ECX,dword ptr [0x005fba1c]     ; 005797d8 | DAT_005fba1c
    MOV EAX,[0x005fba20]                ; 005797df | DAT_005fba20
    MOV EDX,EAX                         ; 005797e4
    SAR EDX,0x1f                        ; 005797e6
    SHL EDX,0x3                         ; 005797e9
    SBB EAX,EDX                         ; 005797ec
    SAR EAX,0x3                         ; 005797ee
    IMUL EAX,ECX                        ; 005797f1
    PUSH EAX                            ; 005797f4
    CALL crt_memory.c_malloc_FUN_005a3650 ; 005797f5
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005797fa
    MOV [0x0060b010],EAX                ; 005797fd | DAT_0060b010
    TEST EAX,EAX                        ; 00579802
    JNZ 0x0057982b                      ; 00579804
        ;   XREF to: 0057982b (CONDITIONAL_JUMP)  ; LAB_0057982b
    PUSH EBX                            ; 00579806
    MOV ECX,0x5d73f1                    ; 00579807
    MOV EBX,0xed                        ; 0057980c
    PUSH 0x5d7408                       ; 00579811
    MOV dword ptr [0x01d71de0],ECX      ; 00579816 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0057981c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00579822
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00579827
    POP EBX                             ; 0057982a
    MOV EAX,[0x005fba18]                ; 0057982b | DAT_005fba18
        ;   Label: LAB_0057982b
    IMUL EAX,dword ptr [0x005fba1c]     ; 00579830 | DAT_005fba1c
    SHL EAX,0x2                         ; 00579837
    ADD EAX,0x40                        ; 0057983a
    PUSH EAX                            ; 0057983d
    CALL crt_memory.c_malloc_FUN_005a3650 ; 0057983e
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00579843
    MOV [0x02d0bcf0],EAX                ; 00579846 | DAT_02d0bcf0
    TEST EAX,EAX                        ; 0057984b
    JZ 0x00579861                       ; 0057984d
        ;   XREF to: 00579861 (CONDITIONAL_JUMP)  ; LAB_00579861
    MOV EAX,[0x02d0bcf0]                ; 0057984f | DAT_02d0bcf0
    ADD EAX,0x10                        ; 00579854
    AND AL,0xf0                         ; 00579857
    MOV [0x0072ffac],EAX                ; 00579859 | DAT_0072ffac
    POP EBP                             ; 0057985e
    POP EDI                             ; 0057985f
    RET                                 ; 00579860
    MOV EDI,0x5d7434                    ; 00579861
        ;   Label: LAB_00579861
    MOV EBP,0xf2                        ; 00579866
    PUSH 0x5d744b                       ; 0057986b
    MOV dword ptr [0x01d71de0],EDI      ; 00579870 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00579876 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057987c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00579881
    MOV EAX,[0x02d0bcf0]                ; 00579884 | DAT_02d0bcf0
    ADD EAX,0x10                        ; 00579889
    AND AL,0xf0                         ; 0057988c
    MOV [0x0072ffac],EAX                ; 0057988e | DAT_0072ffac
    POP EBP                             ; 00579893
    POP EDI                             ; 00579894
    RET                                 ; 00579895

