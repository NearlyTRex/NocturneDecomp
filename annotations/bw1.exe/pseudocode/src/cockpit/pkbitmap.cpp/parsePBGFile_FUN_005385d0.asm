; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * cockpit_pkbitmap_cpp_parsePBGFile_FUN_005385d0(uint *param_1,_FILE *param_2,uint param_3,int param_4,int param_5,int param_6)
;
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_00538750 at 0053879f
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_00537490
;   cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_00537500
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00538280
;   core_main.c_FUN_005030e0
;   crt_memory.c___vec_new_FUN_005c2694
;   crt_memory.c_operator_new_array_FUN_005c1268
;   crt_stdio.c_fread_FUN_005c0b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005385d0
        ;   Label: cockpit_pkbitmap.cpp_parsePBGFile_FUN_005385d0
    PUSH ESI                            ; 005385d1
    PUSH EDI                            ; 005385d2
    PUSH EBP                            ; 005385d3
    SUB ESP,0x34                        ; 005385d4
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005385d7
    MOV EBX,0x1                         ; 005385db
    PUSH EBP                            ; 005385e0
        ;   Label: LAB_005385e0
    PUSH EBX                            ; 005385e1
    PUSH 0x8                            ; 005385e2
    LEA EAX,[ESP + 0x30]                ; 005385e4
    PUSH EAX                            ; 005385e8
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 005385e9
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005c0b10(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 005385ee
    CMP EAX,0x1                         ; 005385f1
    JNZ 0x0053865a                      ; 005385f4
        ;   XREF to: 0053865a (CONDITIONAL_JUMP)  ; LAB_0053865a
    MOV ECX,0x4                         ; 005385f6
    MOV EDI,0x622820                    ; 005385fb
    LEA ESI,[ESP + 0x24]                ; 00538600
    XOR EAX,EAX                         ; 00538604
    CMPSB.REPE ES:EDI,ESI               ; 00538606
    JZ 0x0053860f                       ; 00538608
        ;   XREF to: 0053860f (CONDITIONAL_JUMP)  ; LAB_0053860f
    SBB EAX,EAX                         ; 0053860a
    SBB EAX,-0x1                        ; 0053860c
    TEST EAX,EAX                        ; 0053860f
        ;   Label: LAB_0053860f
    JZ 0x0053867f                       ; 00538611
        ;   XREF to: 0053867f (CONDITIONAL_JUMP)  ; LAB_0053867f
    MOV EAX,0x5ed06c                    ; 00538613
        ;   Label: LAB_00538613
    MOV EDX,0x574                       ; 00538618
    PUSH 0x5ed084                       ; 0053861d
    MOV [0x01d1d400],EAX                ; 00538622 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00538627 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053862d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00538632
    MOV ECX,0x5ed0a7                    ; 00538635
        ;   Label: LAB_00538635
    MOV ESI,0x575                       ; 0053863a
    PUSH 0x5ed0bf                       ; 0053863f
    MOV dword ptr [0x01d1d400],ECX      ; 00538644 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0053864a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00538650
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00538655
    JMP 0x005385e0                      ; 00538658
        ;   XREF to: 005385e0 (UNCONDITIONAL_JUMP)  ; LAB_005385e0
    MOV ESI,0x5ed026                    ; 0053865a
        ;   Label: LAB_0053865a
    MOV EDI,0x573                       ; 0053865f
    PUSH 0x5ed03e                       ; 00538664
    MOV dword ptr [0x01d1d400],ESI      ; 00538669 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0053866f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00538675
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0053867a
    JMP 0x00538613                      ; 0053867d
        ;   XREF to: 00538613 (UNCONDITIONAL_JUMP)  ; LAB_00538613
    CMP EBX,dword ptr [ESP + 0x28]      ; 0053867f
        ;   Label: LAB_0053867f
    JA 0x00538613                       ; 00538683
        ;   XREF to: 00538613 (CONDITIONAL_JUMP)  ; LAB_00538613
    MOV EAX,dword ptr [ESP + 0x28]      ; 00538685
    MOV ECX,dword ptr [ESP + 0x50]      ; 00538689
    XOR EDX,EDX                         ; 0053868d
    DIV ECX                             ; 0053868f
    PUSH 0x6048f0                       ; 00538691
    MOV ESI,EAX                         ; 00538696
    PUSH EAX                            ; 00538698
    IMUL EAX,EAX,0x24                   ; 00538699
    ADD EAX,0x4                         ; 0053869c
    PUSH EAX                            ; 0053869f
    CALL crt_memory.c_operator_new_array_FUN_005c1268 ; 005386a0
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005c1268()
    ADD ESP,0x4                         ; 005386a5
    PUSH EAX                            ; 005386a8
    CALL crt_memory.c___vec_new_FUN_005c2694 ; 005386a9
        ;   XREF to: 005c2694 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_new_FUN_005c2694()
    ADD ESP,0xc                         ; 005386ae
    MOV dword ptr [ESP + 0x2c],EAX      ; 005386b1
    TEST EAX,EAX                        ; 005386b5
    JZ 0x00538635                       ; 005386b7
        ;   XREF to: 00538635 (CONDITIONAL_JUMP)  ; LAB_00538635
    XOR EDI,EDI                         ; 005386bd
    TEST ESI,ESI                        ; 005386bf
    JLE 0x0053873b                      ; 005386c1
        ;   XREF to: 0053873b (CONDITIONAL_JUMP)  ; LAB_0053873b
    MOV dword ptr [ESP + 0x30],EAX      ; 005386c7
    MOV EDX,dword ptr [ESP + 0x58]      ; 005386cb
        ;   Label: LAB_005386cb
    MOV EAX,dword ptr [ESP + 0x54]      ; 005386cf
    TEST EDX,EDX                        ; 005386d3
    JL 0x005386e0                       ; 005386d5
        ;   XREF to: 005386e0 (CONDITIONAL_JUMP)  ; LAB_005386e0
    CMP EDI,EDX                         ; 005386d7
    JZ 0x005386e0                       ; 005386d9
        ;   XREF to: 005386e0 (CONDITIONAL_JUMP)  ; LAB_005386e0
    MOV EAX,0x1                         ; 005386db
    PUSH EAX                            ; 005386e0
        ;   Label: LAB_005386e0
    PUSH EBP                            ; 005386e1
    MOV EBX,dword ptr [ESP + 0x38]      ; 005386e2
    PUSH EBX                            ; 005386e6
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00538280 ; 005386e7
        ;   XREF to: 00538280 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00538280(CPackedBitmap * this_ptr, _FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 005386ec
    MOV EBX,0x1                         ; 005386ef
    CMP EBX,dword ptr [ESP + 0x50]      ; 005386f4
    JGE 0x0053872b                      ; 005386f8
        ;   XREF to: 0053872b (CONDITIONAL_JUMP)  ; LAB_0053872b
    MOV EAX,ESP                         ; 005386fa
        ;   Label: LAB_005386fa
    PUSH EAX                            ; 005386fc
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_00537490 ; 005386fd
        ;   XREF to: 00537490 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_00537490(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 00538702
    PUSH 0x1                            ; 00538705
    PUSH EBP                            ; 00538707
    LEA EAX,[ESP + 0x8]                 ; 00538708
    PUSH EAX                            ; 0053870c
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00538280 ; 0053870d
        ;   XREF to: 00538280 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00538280(CPackedBitmap * this_ptr, _FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 00538712
    PUSH 0x0                            ; 00538715
    LEA EAX,[ESP + 0x4]                 ; 00538717
    PUSH EAX                            ; 0053871b
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_00537500 ; 0053871c
        ;   XREF to: 00537500 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_00537500(CPackedBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00538721
    INC EBX                             ; 00538724
    CMP EBX,dword ptr [ESP + 0x50]      ; 00538725
    JL 0x005386fa                       ; 00538729
        ;   XREF to: 005386fa (CONDITIONAL_JUMP)  ; LAB_005386fa
    MOV EAX,dword ptr [ESP + 0x30]      ; 0053872b
        ;   Label: LAB_0053872b
    ADD EAX,0x24                        ; 0053872f
    INC EDI                             ; 00538732
    MOV dword ptr [ESP + 0x30],EAX      ; 00538733
    CMP EDI,ESI                         ; 00538737
    JL 0x005386cb                       ; 00538739
        ;   XREF to: 005386cb (CONDITIONAL_JUMP)  ; LAB_005386cb
    MOV EAX,dword ptr [ESP + 0x48]      ; 0053873b
        ;   Label: LAB_0053873b
    MOV dword ptr [EAX],ESI             ; 0053873f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00538741
    ADD ESP,0x34                        ; 00538745
    POP EBP                             ; 00538748
    POP EDI                             ; 00538749
    POP ESI                             ; 0053874a
    POP EBX                             ; 0053874b
    RET                                 ; 0053874c

