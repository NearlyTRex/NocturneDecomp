; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004bc6f0(SNotesMap *this_ptr,float *param_2)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   param_2
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_fldnotes.cpp_SNotesMap_draw_FUN_004bc830 at 004bc930
;   core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004bc450 at 004bc494
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d2c904
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc6f0
        ;   Label: core_fldnotes.cpp_SNotesMap_worldToMap_FUN_004bc6f0
    PUSH ESI                            ; 004bc6f1
    PUSH EDI                            ; 004bc6f2
    PUSH EBP                            ; 004bc6f3
    SUB ESP,0x14                        ; 004bc6f4
    MOV EBP,dword ptr [ESP + 0x28]      ; 004bc6f7
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004bc6fb
    MOV EDX,dword ptr [EDI + 0xc]       ; 004bc6ff
    TEST EDX,EDX                        ; 004bc702
    JL 0x004bc751                       ; 004bc704
        ;   XREF to: 004bc751 (CONDITIONAL_JUMP)  ; LAB_004bc751
    MOV EAX,[0x0061f650]                ; 004bc706 | DAT_0061f650
    CMP EDX,dword ptr [EAX + 0x4]       ; 004bc70b | DAT_01d2c904
    JGE 0x004bc751                      ; 004bc70e
        ;   XREF to: 004bc751 (CONDITIONAL_JUMP)  ; LAB_004bc751
    MOV EBX,dword ptr [EBP + 0x9c]      ; 004bc710
    XOR ESI,ESI                         ; 004bc716
    TEST EBX,EBX                        ; 004bc718
    JLE 0x004bc751                      ; 004bc71a
        ;   XREF to: 004bc751 (CONDITIONAL_JUMP)  ; LAB_004bc751
    LEA EBX,[EBP + 0xa0]                ; 004bc71c
    MOV EDX,dword ptr [EDI + 0xc]       ; 004bc722
        ;   Label: LAB_004bc722
    MOV EAX,[0x0061f650]                ; 004bc725 | DAT_0061f650
    SHL EDX,0x8                         ; 004bc72a
    ADD EAX,0x8                         ; 004bc72d
    PUSH EBX                            ; 004bc730
    ADD EAX,EDX                         ; 004bc731
    PUSH EAX                            ; 004bc733
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004bc734
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bc739
    TEST EAX,EAX                        ; 004bc73c
    JZ 0x004bc75e                       ; 004bc73e
        ;   XREF to: 004bc75e (CONDITIONAL_JUMP)  ; LAB_004bc75e
    INC ESI                             ; 004bc740
    MOV EAX,dword ptr [EBP + 0x9c]      ; 004bc741
    ADD EBX,0x88                        ; 004bc747
    CMP ESI,EAX                         ; 004bc74d
    JL 0x004bc722                       ; 004bc74f
        ;   XREF to: 004bc722 (CONDITIONAL_JUMP)  ; LAB_004bc722
    MOV EAX,0xffffffff                  ; 004bc751
        ;   Label: LAB_004bc751
    ADD ESP,0x14                        ; 004bc756
    POP EBP                             ; 004bc759
    POP EDI                             ; 004bc75a
    POP ESI                             ; 004bc75b
    POP EBX                             ; 004bc75c
    RET                                 ; 004bc75d
    FLD float ptr [EBX + 0x7c]          ; 004bc75e
        ;   Label: LAB_004bc75e
    FLD float ptr [EDI]                 ; 004bc761
    FSUB float ptr [EBX + 0x74]         ; 004bc763
    FXCH                                ; 004bc766
    FSUB float ptr [EBX + 0x74]         ; 004bc768
    FXCH                                ; 004bc76b
    FDIV ST0,ST1                        ; 004bc76d
    FLD float ptr [EBX + 0x80]          ; 004bc76f
    FLD float ptr [EDI + 0x8]           ; 004bc775
    FSUB float ptr [EBX + 0x78]         ; 004bc778
    FXCH                                ; 004bc77b
    FSUB float ptr [EBX + 0x78]         ; 004bc77d
    FXCH                                ; 004bc780
    FDIV ST0,ST1                        ; 004bc782
    FXCH ST3                            ; 004bc784
    FMULP                               ; 004bc786
    FLDZ                                ; 004bc788
    FXCH ST2                            ; 004bc78a
    FSTP float ptr [ESP + 0xc]          ; 004bc78c
    FXCH ST2                            ; 004bc790
    FSTP float ptr [ESP + 0x8]          ; 004bc792
    FCOMPP                              ; 004bc796
    FNSTSW AX                           ; 004bc798
    SAHF                                ; 004bc79a
    JNC 0x004bc7ef                      ; 004bc79b
        ;   XREF to: 004bc7ef (CONDITIONAL_JUMP)  ; LAB_004bc7ef
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004bc79d
    MOV EDI,dword ptr [EBX + 0x64]      ; 004bc7a0
    SUB EAX,EDI                         ; 004bc7a3
    MOV dword ptr [ESP + 0x10],EAX      ; 004bc7a5
    FILD dword ptr [ESP + 0x10]         ; 004bc7a9
    FMUL float ptr [ESP + 0x8]          ; 004bc7ad
    FILD dword ptr [EBX + 0x64]         ; 004bc7b1
    FADDP                               ; 004bc7b4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004bc7b6
    CALL crt_math.c_round_FUN_005c03a0  ; 004bc7ba
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EAX]               ; 004bc7bf
    MOV EAX,dword ptr [EBX + 0x70]      ; 004bc7c1
    MOV EBP,dword ptr [EBX + 0x68]      ; 004bc7c4
    SUB EAX,EBP                         ; 004bc7c7
    MOV dword ptr [ESP + 0x10],EAX      ; 004bc7c9
    FILD dword ptr [ESP + 0x10]         ; 004bc7cd
    FMUL float ptr [ESP + 0xc]          ; 004bc7d1
    FILD dword ptr [EBX + 0x68]         ; 004bc7d5
        ;   Label: LAB_004bc7d5
    FADDP                               ; 004bc7d8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004bc7da
    CALL crt_math.c_round_FUN_005c03a0  ; 004bc7de
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EAX]               ; 004bc7e3
    MOV EAX,ESI                         ; 004bc7e5
    ADD ESP,0x14                        ; 004bc7e7
    POP EBP                             ; 004bc7ea
    POP EDI                             ; 004bc7eb
    POP ESI                             ; 004bc7ec
    POP EBX                             ; 004bc7ed
    RET                                 ; 004bc7ee
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004bc7ef
        ;   Label: LAB_004bc7ef
    MOV EDX,dword ptr [EBX + 0x64]      ; 004bc7f2
    SUB EAX,EDX                         ; 004bc7f5
    MOV dword ptr [ESP + 0x10],EAX      ; 004bc7f7
    FILD dword ptr [ESP + 0x10]         ; 004bc7fb
    FMUL float ptr [ESP + 0xc]          ; 004bc7ff
    FILD dword ptr [EBX + 0x64]         ; 004bc803
    FADDP                               ; 004bc806
    MOV EAX,dword ptr [ESP + 0x30]      ; 004bc808
    CALL crt_math.c_round_FUN_005c03a0  ; 004bc80c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EAX]               ; 004bc811
    MOV EAX,dword ptr [EBX + 0x70]      ; 004bc813
    MOV ECX,dword ptr [EBX + 0x68]      ; 004bc816
    SUB EAX,ECX                         ; 004bc819
    MOV dword ptr [ESP + 0x10],EAX      ; 004bc81b
    FILD dword ptr [ESP + 0x10]         ; 004bc81f
    FMUL float ptr [ESP + 0x8]          ; 004bc823
    JMP 0x004bc7d5                      ; 004bc827
        ;   XREF to: 004bc7d5 (UNCONDITIONAL_JUMP)  ; LAB_004bc7d5

