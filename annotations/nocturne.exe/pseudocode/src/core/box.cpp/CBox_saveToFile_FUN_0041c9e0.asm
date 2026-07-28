; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_saveToFile_FUN_0041c9e0(CBox *this_ptr,_FILE *file_handle,char *indent_prefix)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; char *           Stack[0xc]:4   indent_prefix
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   core_actor.cpp_archiveBox_FUN_0040ce80 at 0040cf3c
;
; Referenced Globals:
;   TerminatedCString s_sboxVersion_0057974b
;   TerminatedCString s_s_d_00579759
;   TerminatedCString s_sboxStateInfo_0057975f
;   TerminatedCString s_s_f_f_f_0057976f
;   TerminatedCString s_s_f_f_f_0057977b
;   TerminatedCString s_s_f_f_f_00579787
;   TerminatedCString s_s_f_00579793
;   TerminatedCString s_s_f_f_f_00579799
;   TerminatedCString s_s_f_f_f_005797a5
;   TerminatedCString s_s_d_005797b1
;   double DOUBLE_005797bd = 32
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041c9e0
        ;   Label: core_box.cpp_CBox_saveToFile_FUN_0041c9e0
    PUSH ESI                            ; 0041c9e1
    PUSH EDI                            ; 0041c9e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041c9e3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0041c9e7
    MOV EDI,dword ptr [ESP + 0x18]      ; 0041c9eb
    PUSH EDI                            ; 0041c9ef
    PUSH 0x57974b                       ; 0041c9f0 | = "%sboxVersion\n"
    PUSH ESI                            ; 0041c9f5
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0041c9f6
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0041c9fb
    PUSH 0x1                            ; 0041c9fe
    PUSH EDI                            ; 0041ca00
    PUSH 0x579759                       ; 0041ca01 | = "%s%d\n"
    PUSH ESI                            ; 0041ca06
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0041ca07
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 0041ca0c
    PUSH EDI                            ; 0041ca0f
    PUSH 0x57975f                       ; 0041ca10 | = "%sboxStateInfo\n"
    PUSH ESI                            ; 0041ca15
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0041ca16
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0041ca1b
    SUB ESP,0x8                         ; 0041ca1e
    FLD float ptr [EBX + 0x8]           ; 0041ca21
    FSTP double ptr [ESP]               ; 0041ca24
    SUB ESP,0x8                         ; 0041ca27
    FLD float ptr [EBX + 0x4]           ; 0041ca2a
    FSTP double ptr [ESP]               ; 0041ca2d
    SUB ESP,0x8                         ; 0041ca30
    FLD float ptr [EBX]                 ; 0041ca33
    FSTP double ptr [ESP]               ; 0041ca35
    PUSH EDI                            ; 0041ca38
    PUSH 0x57976f                       ; 0041ca39 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 0041ca3e
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0041ca3f
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x24                        ; 0041ca44
    SUB ESP,0x8                         ; 0041ca47
    FLD float ptr [EBX + 0x10]          ; 0041ca4a
    FSTP double ptr [ESP]               ; 0041ca4d
    SUB ESP,0x8                         ; 0041ca50
    FLD float ptr [EBX + 0x14]          ; 0041ca53
    FSTP double ptr [ESP]               ; 0041ca56
    SUB ESP,0x8                         ; 0041ca59
    FLD float ptr [EBX + 0xc]           ; 0041ca5c
    FSTP double ptr [ESP]               ; 0041ca5f
    PUSH EDI                            ; 0041ca62
    PUSH 0x57977b                       ; 0041ca63 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 0041ca68
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0041ca69
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x24                        ; 0041ca6e
    SUB ESP,0x8                         ; 0041ca71
    FLD float ptr [EBX + 0xac]          ; 0041ca74
    FSTP double ptr [ESP]               ; 0041ca7a
    SUB ESP,0x8                         ; 0041ca7d
    FLD float ptr [EBX + 0xa8]          ; 0041ca80
    FSTP double ptr [ESP]               ; 0041ca86
    SUB ESP,0x8                         ; 0041ca89
    FLD float ptr [EBX + 0xa4]          ; 0041ca8c
    FSTP double ptr [ESP]               ; 0041ca92
    PUSH EDI                            ; 0041ca95
    PUSH 0x579787                       ; 0041ca96 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 0041ca9b
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0041ca9c
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    FLD float ptr [EBX + 0x94]          ; 0041caa1
    ADD ESP,0x24                        ; 0041caa7
    FMUL double ptr [0x005797bd]        ; 0041caaa | DOUBLE_005797bd
    SUB ESP,0x8                         ; 0041cab0
    FSTP double ptr [ESP]               ; 0041cab3
    PUSH EDI                            ; 0041cab6
    PUSH 0x579793                       ; 0041cab7 | = "%s%f\n"
    PUSH ESI                            ; 0041cabc
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0041cabd
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x14                        ; 0041cac2
    SUB ESP,0x8                         ; 0041cac5
    FLD float ptr [EBX + 0x54]          ; 0041cac8
    FSTP double ptr [ESP]               ; 0041cacb
    SUB ESP,0x8                         ; 0041cace
    FLD float ptr [EBX + 0x50]          ; 0041cad1
    FSTP double ptr [ESP]               ; 0041cad4
    SUB ESP,0x8                         ; 0041cad7
    FLD float ptr [EBX + 0x4c]          ; 0041cada
    FSTP double ptr [ESP]               ; 0041cadd
    PUSH EDI                            ; 0041cae0
    PUSH 0x579799                       ; 0041cae1 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 0041cae6
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0041cae7
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x24                        ; 0041caec
    SUB ESP,0x8                         ; 0041caef
    FLD float ptr [EBX + 0x78]          ; 0041caf2
    FSTP double ptr [ESP]               ; 0041caf5
    SUB ESP,0x8                         ; 0041caf8
    FLD float ptr [EBX + 0x74]          ; 0041cafb
    FSTP double ptr [ESP]               ; 0041cafe
    SUB ESP,0x8                         ; 0041cb01
    FLD float ptr [EBX + 0x70]          ; 0041cb04
    FSTP double ptr [ESP]               ; 0041cb07
    PUSH EDI                            ; 0041cb0a
    PUSH 0x5797a5                       ; 0041cb0b | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 0041cb10
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0041cb11
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x24                        ; 0041cb16
    MOV EDX,dword ptr [EBX + 0x254]     ; 0041cb19
    PUSH EDX                            ; 0041cb1f
    PUSH EDI                            ; 0041cb20
    PUSH 0x5797b1                       ; 0041cb21 | = "%s%d\n"
    PUSH ESI                            ; 0041cb26
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0041cb27
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 0041cb2c
    POP EDI                             ; 0041cb2f
    POP ESI                             ; 0041cb30
    POP EBX                             ; 0041cb31
    RET                                 ; 0041cb32

