; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004bcbf0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x644]:1  local_644
; undefined        Stack[-0x144]:1  local_144
; undefined1       Stack[-0x143]:1  local_143
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b6170 at 004b6dae
;
; Referenced Globals:
;   undefined4 DAT_005d8748
;   TerminatedCString s_Can_t_open_s_005d874c
;   TerminatedCString s_s_is_d_bytes_but_expecte_005d875a
;   undefined1 DAT_005d878a
;   undefined1 DAT_005d878b
;   undefined1 DAT_005d878c
;   undefined1 DAT_005d878d
;   undefined4 DAT_005d878f
;   undefined4 DAT_005d8792
;   TerminatedCString s_Can_t_open_s_005d8796
;   undefined4 DAT_005d87a4
;   undefined4 DAT_005d87a7
;   TerminatedCString s_core_game_cpp_005d87ab
;   TerminatedCString s_Can_t_open_s_005d87bc
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   ... and 18 more
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004b7140
;   core_game.cpp_FUN_004b3000
;   core_game.cpp_FUN_004b8250
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fread_FUN_005b87c0
;   crt_string.c_splitpath_FUN_005b9e58
;   crt_unknown.c_FUN_005b8580
;   crt_unknown.c_FUN_005b86a0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_dosio.cpp_FUN_00460c70
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   engine_special.cpp_FUN_0055f500
;   engine_special.cpp_FUN_0055f550
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bcbf0
        ;   Label: core_game.cpp_FUN_004bcbf0
    PUSH ESI                            ; 004bcbf1
    PUSH EDI                            ; 004bcbf2
    PUSH EBP                            ; 004bcbf3
    SUB ESP,0xa34                       ; 004bcbf4
    MOV EBP,dword ptr [0x006141b8]      ; 004bcbfa | DAT_006141b8
    MOV EAX,dword ptr [ESP + 0xa48]     ; 004bcc00
    CMP byte ptr [EAX + 0x8d8],0x0      ; 004bcc07
    JNZ 0x004bcc21                      ; 004bcc0e
        ;   XREF to: 004bcc21 (CONDITIONAL_JUMP)  ; LAB_004bcc21
    MOV EBP,dword ptr [0x006141b8]      ; 004bcc10 | DAT_006141b8
        ;   Label: LAB_004bcc10
    ADD ESP,0xa34                       ; 004bcc16
    POP EBP                             ; 004bcc1c
    POP EDI                             ; 004bcc1d
    POP ESI                             ; 004bcc1e
    POP EBX                             ; 004bcc1f
    RET                                 ; 004bcc20
    LEA EBX,[EAX + 0x8d8]               ; 004bcc21
        ;   Label: LAB_004bcc21
    PUSH EBX                            ; 004bcc27
    PUSH 0x5d8748                       ; 004bcc28 | DAT_005d8748
    MOV dword ptr [EAX + 0xe0],0x0      ; 004bcc2d
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 004bcc37
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004bcc3c
    TEST EAX,EAX                        ; 004bcc3f
    JL 0x004bd012                       ; 004bcc41
        ;   XREF to: 004bd012 (CONDITIONAL_JUMP)  ; LAB_004bd012
    MOV ECX,dword ptr [ESP + 0xa48]     ; 004bcc47
    MOV EDX,dword ptr [ESP + 0xa48]     ; 004bcc4e
    MOV ESI,dword ptr [ECX + 0x9dc]     ; 004bcc55
    MOV EDX,dword ptr [EDX + 0x9d8]     ; 004bcc5b
    IMUL EDX,ESI                        ; 004bcc61
    CMP EAX,EDX                         ; 004bcc64
    JNZ 0x004bd046                      ; 004bcc66
        ;   XREF to: 004bd046 (CONDITIONAL_JUMP)  ; LAB_004bd046
    PUSH 0x0                            ; 004bcc6c
    LEA EAX,[ESP + 0x904]               ; 004bcc6e
    PUSH EAX                            ; 004bcc75
    PUSH 0x0                            ; 004bcc76
    PUSH 0x0                            ; 004bcc78
    PUSH EBX                            ; 004bcc7a
    CALL crt_string.c_splitpath_FUN_005b9e58 ; 004bcc7b
        ;   XREF to: 005b9e58 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005b9e58(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004bcc80
    MOV ESI,0x5d878a                    ; 004bcc83 | DAT_005d878a
    LEA EDI,[ESP + 0x900]               ; 004bcc88
    PUSH EDI                            ; 004bcc8f
    SUB ECX,ECX                         ; 004bcc90
    DEC ECX                             ; 004bcc92
    MOV AL,0x0                          ; 004bcc93
    SCASB.REPNE ES:EDI                  ; 004bcc95
    DEC EDI                             ; 004bcc97
    MOV AL,byte ptr [ESI]               ; 004bcc98 | DAT_005d878a | DAT_005d878c
        ;   Label: LAB_004bcc98
    MOV byte ptr [EDI],AL               ; 004bcc9a
    CMP AL,0x0                          ; 004bcc9c
    JZ 0x004bccb0                       ; 004bcc9e
        ;   XREF to: 004bccb0 (CONDITIONAL_JUMP)  ; LAB_004bccb0
    MOV AL,byte ptr [ESI + 0x1]         ; 004bcca0 | DAT_005d878b | DAT_005d878d
    ADD ESI,0x2                         ; 004bcca3
    MOV byte ptr [EDI + 0x1],AL         ; 004bcca6
    ADD EDI,0x2                         ; 004bcca9
    CMP AL,0x0                          ; 004bccac
    JNZ 0x004bcc98                      ; 004bccae
        ;   XREF to: 004bcc98 (CONDITIONAL_JUMP)  ; LAB_004bcc98
    POP EDI                             ; 004bccb0
        ;   Label: LAB_004bccb0
    PUSH 0x5d878f                       ; 004bccb1 | DAT_005d878f
    LEA EAX,[ESP + 0x904]               ; 004bccb6
    PUSH EAX                            ; 004bccbd
    PUSH 0x5d8792                       ; 004bccbe | DAT_005d8792
    CALL engine_dosio.cpp_FUN_00460c70  ; 004bccc3
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 004bccc8
    ADD ESP,0xc                         ; 004bccca
    TEST EAX,EAX                        ; 004bcccd
    JZ 0x004bd083                       ; 004bcccf
        ;   XREF to: 004bd083 (CONDITIONAL_JUMP)  ; LAB_004bd083
    PUSH EAX                            ; 004bccd5
    PUSH 0x300                          ; 004bccd6
    PUSH 0x1                            ; 004bccdb
    LEA EAX,[ESP + 0x40c]               ; 004bccdd
    PUSH EAX                            ; 004bcce4
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004bcce5
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 004bccea
    PUSH EBX                            ; 004bcced
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004bccee
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004bccf3
    XOR EBX,EBX                         ; 004bccf6
    XOR ESI,ESI                         ; 004bccf8
    MOV dword ptr [ESP + 0xa20],EBX     ; 004bccfa
    MOV EDI,dword ptr [0x006141c0]      ; 004bcd01 | DAT_006141c0
        ;   Label: LAB_004bcd01
    MOV EBP,dword ptr [0x006141b8]      ; 004bcd07 | DAT_006141b8
    CMP EDI,0x10                        ; 004bcd0d
    JNZ 0x004bd0bd                      ; 004bcd10
        ;   XREF to: 004bd0bd (CONDITIONAL_JUMP)  ; LAB_004bd0bd
    XOR EAX,EAX                         ; 004bcd16
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x401] ; 004bcd18
    MOV dword ptr [ESP + 0xa00],EAX     ; 004bcd1f
    MOV EDI,dword ptr [0x01c35818]      ; 004bcd26 | DAT_01c35818
    MOV EDX,dword ptr [ESP + 0xa00]     ; 004bcd2c
    XOR EAX,EAX                         ; 004bcd33
    MOV dword ptr [ESP + 0xa04],EDX     ; 004bcd35
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x400] ; 004bcd3c
    XOR EDX,EDX                         ; 004bcd43
    DIV EDI                             ; 004bcd45
    MOV EDI,EAX                         ; 004bcd47
    XOR EDX,EDX                         ; 004bcd49
    MOV EAX,dword ptr [ESP + 0xa00]     ; 004bcd4b
    DIV dword ptr [0x01c35824]          ; 004bcd52 | DAT_01c35824
    XOR ECX,ECX                         ; 004bcd58
    MOV CL,byte ptr [ESP + EBX*0x1 + 0x402] ; 004bcd5a
    MOV dword ptr [ESP + 0xa08],ECX     ; 004bcd61
    MOV dword ptr [ESP + 0xa04],EAX     ; 004bcd68
    XOR EDX,EDX                         ; 004bcd6f
    MOV EAX,ECX                         ; 004bcd71
    DIV dword ptr [0x01c35830]          ; 004bcd73 | DAT_01c35830
    MOV CL,byte ptr [0x01c35814]        ; 004bcd79 | DAT_01c35814
    MOV dword ptr [ESP + 0xa08],EAX     ; 004bcd7f
    MOV EDX,EDI                         ; 004bcd86
    MOV EAX,dword ptr [ESP + 0xa04]     ; 004bcd88
    SHL EDX,CL                          ; 004bcd8f
    MOV CL,byte ptr [0x01c35820]        ; 004bcd91 | DAT_01c35820
    SHL EAX,CL                          ; 004bcd97
    MOV CL,byte ptr [0x01c3582c]        ; 004bcd99 | DAT_01c3582c
    OR EDX,EAX                          ; 004bcd9f
    MOV EAX,dword ptr [ESP + 0xa08]     ; 004bcda1
    SHL EAX,CL                          ; 004bcda8
    OR EAX,EDX                          ; 004bcdaa
    MOV word ptr [ESP + ESI*0x1 + 0x700],AX ; 004bcdac
    MOV EDI,dword ptr [ESP + 0xa20]     ; 004bcdb4
        ;   Label: LAB_004bcdb4
    ADD ESI,0x2                         ; 004bcdbb
    MOV dword ptr [0x006141b8],EBP      ; 004bcdbe | DAT_006141b8
    ADD EDI,0x4                         ; 004bcdc4
    ADD EBX,0x3                         ; 004bcdc7
    MOV dword ptr [ESP + 0xa20],EDI     ; 004bcdca
    CMP ESI,0x200                       ; 004bcdd1
    JNZ 0x004bcd01                      ; 004bcdd7
        ;   XREF to: 004bcd01 (CONDITIONAL_JUMP)  ; LAB_004bcd01
    CALL wincore_wddvmem.cpp_FUN_005890c0 ; 004bcddd
        ;   XREF to: 005890c0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005890c0()
    CALL engine_special.cpp_FUN_0055f500 ; 004bcde2
        ;   XREF to: 0055f500 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0055f500()
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 004bcde7
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    PUSH 0x0                            ; 004bcdec
    CALL engine_special.cpp_FUN_0055f550 ; 004bcdee
        ;   XREF to: 0055f550 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_0055f550(int clear_lock_flag)
    ADD ESP,0x4                         ; 004bcdf3
    CALL wincore_wddvmem.cpp_FUN_00589170 ; 004bcdf6
        ;   XREF to: 00589170 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589170()
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 004bcdfb
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
    MOV EAX,dword ptr [ESP + 0xa48]     ; 004bce00
    MOV EDX,dword ptr [ESP + 0xa48]     ; 004bce07
    MOV EAX,dword ptr [EAX + 0x9d8]     ; 004bce0e
    IMUL EAX,dword ptr [EDX + 0x9dc]    ; 004bce14
    PUSH EAX                            ; 004bce1b
    CALL crt_unknown.c_FUN_005b8580     ; 004bce1c
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004bce21
    MOV dword ptr [ESP + 0xa2c],EAX     ; 004bce24
    TEST EAX,EAX                        ; 004bce2b
    JZ 0x004bd09e                       ; 004bce2d
        ;   XREF to: 004bd09e (CONDITIONAL_JUMP)  ; LAB_004bd09e
    MOV ESI,dword ptr [ESP + 0xa48]     ; 004bce33
    PUSH 0x5d87a4                       ; 004bce3a | DAT_005d87a4
    ADD ESI,0x8d8                       ; 004bce3f
    PUSH ESI                            ; 004bce45
    PUSH 0x5d87a7                       ; 004bce46 | DAT_005d87a7
    CALL engine_dosio.cpp_FUN_00460c70  ; 004bce4b
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004bce50
    MOV EBX,EAX                         ; 004bce53
    TEST EAX,EAX                        ; 004bce55
    JNZ 0x004bce7c                      ; 004bce57
        ;   XREF to: 004bce7c (CONDITIONAL_JUMP)  ; LAB_004bce7c
    PUSH ESI                            ; 004bce59
    MOV EDI,0x5d87ab                    ; 004bce5a | = "..\\core\\game.cpp"
    MOV EAX,0x1275                      ; 004bce5f
    PUSH 0x5d87bc                       ; 004bce64 | = "Can't open %s"
    MOV dword ptr [0x01d046a0],EDI      ; 004bce69 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004bce6f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004bce74
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004bce79
    MOV EAX,dword ptr [ESP + 0xa48]     ; 004bce7c
        ;   Label: LAB_004bce7c
    PUSH EBX                            ; 004bce83
    MOV EDX,dword ptr [EAX + 0x9dc]     ; 004bce84
    PUSH EDX                            ; 004bce8a
    MOV ECX,dword ptr [EAX + 0x9d8]     ; 004bce8b
    PUSH ECX                            ; 004bce91
    MOV ESI,dword ptr [ESP + 0xa38]     ; 004bce92
    PUSH ESI                            ; 004bce99
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004bce9a
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 004bce9f
    PUSH EBX                            ; 004bcea2
    XOR EDI,EDI                         ; 004bcea3
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004bcea5
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004bceaa
    MOV EAX,[0x006141bc]                ; 004bcead | DAT_006141bc
    MOV dword ptr [ESP + 0xa28],EDI     ; 004bceb2
    TEST EAX,EAX                        ; 004bceb9
    JLE 0x004bcfa3                      ; 004bcebb
        ;   XREF to: 004bcfa3 (CONDITIONAL_JUMP)  ; LAB_004bcfa3
    MOV dword ptr [ESP + 0xa1c],EDI     ; 004bcec1
    MOV EAX,dword ptr [ESP + 0xa48]     ; 004bcec8
        ;   Label: LAB_004bcec8
    MOV EDX,dword ptr [ESP + 0xa28]     ; 004bcecf
    IMUL EDX,dword ptr [EAX + 0x9dc]    ; 004bced6
    MOV ECX,dword ptr [0x006141bc]      ; 004bcedd | DAT_006141bc
    MOV EAX,EDX                         ; 004bcee3
    SAR EDX,0x1f                        ; 004bcee5
    IDIV ECX                            ; 004bcee8
    MOV EDX,dword ptr [ESP + 0xa48]     ; 004bceea
    MOV EDX,dword ptr [EDX + 0x9d8]     ; 004bcef1
    IMUL EDX,EAX                        ; 004bcef7
    MOV EBP,dword ptr [0x006141b8]      ; 004bcefa | DAT_006141b8
    XOR ECX,ECX                         ; 004bcf00
    MOV dword ptr [ESP + 0xa30],EDX     ; 004bcf02
    TEST EBP,EBP                        ; 004bcf09
    JLE 0x004bcf6f                      ; 004bcf0b
        ;   XREF to: 004bcf6f (CONDITIONAL_JUMP)  ; LAB_004bcf6f
    MOV EDI,dword ptr [ESP + 0xa1c]     ; 004bcf0d
    XOR EBX,EBX                         ; 004bcf14
    XOR ESI,ESI                         ; 004bcf16
    MOV EDX,dword ptr [ESP + 0xa48]     ; 004bcf18
        ;   Label: LAB_004bcf18
    MOV EDX,dword ptr [EDX + 0x9d8]     ; 004bcf1f
    IMUL EDX,ECX                        ; 004bcf25
    MOV EAX,EDX                         ; 004bcf28
    SAR EDX,0x1f                        ; 004bcf2a
    IDIV EBP                            ; 004bcf2d
    ADD EAX,dword ptr [ESP + 0xa30]     ; 004bcf2f
    ADD EAX,dword ptr [ESP + 0xa2c]     ; 004bcf36
    CMP dword ptr [0x006141c0],0x10     ; 004bcf3d | DAT_006141c0
    JNZ 0x004bd13a                      ; 004bcf44
        ;   XREF to: 004bd13a (CONDITIONAL_JUMP)  ; LAB_004bd13a
    MOV EDX,dword ptr [EDI + 0x1c2a38c] ; 004bcf4a | DAT_01c2a38c
    ADD EDX,ESI                         ; 004bcf50
    MOV AL,byte ptr [EAX]               ; 004bcf52
    AND EAX,0xff                        ; 004bcf54
    MOV AX,word ptr [ESP + EAX*0x2 + 0x700] ; 004bcf59
    MOV word ptr [EDX],AX               ; 004bcf61
    ADD EBX,0x4                         ; 004bcf64
        ;   Label: LAB_004bcf64
    INC ECX                             ; 004bcf67
    ADD ESI,0x2                         ; 004bcf68
    CMP ECX,EBP                         ; 004bcf6b
    JL 0x004bcf18                       ; 004bcf6d
        ;   XREF to: 004bcf18 (CONDITIONAL_JUMP)  ; LAB_004bcf18
    MOV EDX,dword ptr [ESP + 0xa1c]     ; 004bcf6f
        ;   Label: LAB_004bcf6f
    MOV ECX,dword ptr [ESP + 0xa28]     ; 004bcf76
    MOV EBX,dword ptr [0x006141bc]      ; 004bcf7d | DAT_006141bc
    MOV dword ptr [0x006141b8],EBP      ; 004bcf83 | DAT_006141b8
    ADD EDX,0x4                         ; 004bcf89
    INC ECX                             ; 004bcf8c
    MOV dword ptr [ESP + 0xa1c],EDX     ; 004bcf8d
    MOV dword ptr [ESP + 0xa28],ECX     ; 004bcf94
    CMP ECX,EBX                         ; 004bcf9b
    JL 0x004bcec8                       ; 004bcf9d
        ;   XREF to: 004bcec8 (CONDITIONAL_JUMP)  ; LAB_004bcec8
    MOV ESI,dword ptr [ESP + 0xa48]     ; 004bcfa3
        ;   Label: LAB_004bcfa3
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004bcfaa
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    PUSH ESI                            ; 004bcfaf
    CALL core_game.cpp_FUN_004b8250     ; 004bcfb0
        ;   XREF to: 004b8250 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b8250(CGame * this_ptr)
    ADD ESP,0x4                         ; 004bcfb5
    LEA EBX,[ESI + 0x3a8]               ; 004bcfb8
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 004bcfbe
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
        ;   Label: LAB_004bcfbe
    MOV EAX,dword ptr [ESP + 0xa48]     ; 004bcfc3
    CMP dword ptr [EAX + 0xd0],0x2      ; 004bcfca
    JNZ 0x004bcfdc                      ; 004bcfd1
        ;   XREF to: 004bcfdc (CONDITIONAL_JUMP)  ; LAB_004bcfdc
    PUSH EAX                            ; 004bcfd3
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b7140 ; 004bcfd4
        ;   XREF to: 004b7140 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b7140(CGame * this_ptr)
    ADD ESP,0x4                         ; 004bcfd9
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40 ; 004bcfdc
        ;   XREF to: 0058eb40 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40()
        ;   Label: LAB_004bcfdc
    TEST EAX,EAX                        ; 004bcfe1
    JZ 0x004bd153                       ; 004bcfe3
        ;   XREF to: 004bd153 (CONDITIONAL_JUMP)  ; LAB_004bd153
    XOR EBX,EBX                         ; 004bcfe9
        ;   Label: LAB_004bcfe9
    CMP EBX,dword ptr [0x01c2a384]      ; 004bcfeb | DAT_01c2a384
        ;   Label: LAB_004bcfeb
    JZ 0x004bd1c9                       ; 004bcff1
        ;   XREF to: 004bd1c9 (CONDITIONAL_JUMP)  ; LAB_004bd1c9
    MOV EAX,dword ptr [ESP + 0xa48]     ; 004bcff7
        ;   Label: LAB_004bcff7
    CMP dword ptr [EAX + 0xd0],0x2      ; 004bcffe
    JZ 0x004bd2b8                       ; 004bd005
        ;   XREF to: 004bd2b8 (CONDITIONAL_JUMP)  ; LAB_004bd2b8
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 004bd00b
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
    JMP 0x004bcfeb                      ; 004bd010
        ;   XREF to: 004bcfeb (UNCONDITIONAL_JUMP)  ; LAB_004bcfeb
    PUSH EBX                            ; 004bd012
        ;   Label: LAB_004bd012
    PUSH 0x5d874c                       ; 004bd013 | = "Can't open %s"
    MOV ESI,dword ptr [0x006138e0]      ; 004bd018 | g_CEditorToolsPtr
    PUSH ESI                            ; 004bd01e
    CALL shape_edittool.cpp_FUN_0047be40 ; 004bd01f
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0xc                         ; 004bd024
    MOV EAX,dword ptr [ESP + 0xa48]     ; 004bd027
    MOV byte ptr [EAX + 0x8d8],0x0      ; 004bd02e
    MOV EBP,dword ptr [0x006141b8]      ; 004bd035 | DAT_006141b8
    ADD ESP,0xa34                       ; 004bd03b
    POP EBP                             ; 004bd041
    POP EDI                             ; 004bd042
    POP ESI                             ; 004bd043
    POP EBX                             ; 004bd044
    RET                                 ; 004bd045
    PUSH EDX                            ; 004bd046
        ;   Label: LAB_004bd046
    PUSH ESI                            ; 004bd047
    MOV ECX,dword ptr [ECX + 0x9d8]     ; 004bd048
    PUSH ECX                            ; 004bd04e
    PUSH EBX                            ; 004bd04f
    PUSH 0x5d875a                       ; 004bd050 | = "%s is %d bytes, but expected %dx%d=%d..."
    MOV EBX,dword ptr [0x006138e0]      ; 004bd055 | g_CEditorToolsPtr
    PUSH EBX                            ; 004bd05b
    CALL shape_edittool.cpp_FUN_0047be40 ; 004bd05c
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0x18                        ; 004bd061
    MOV EAX,dword ptr [ESP + 0xa48]     ; 004bd064
    MOV byte ptr [EAX + 0x8d8],0x0      ; 004bd06b
    MOV EBP,dword ptr [0x006141b8]      ; 004bd072 | DAT_006141b8
    ADD ESP,0xa34                       ; 004bd078
    POP EBP                             ; 004bd07e
    POP EDI                             ; 004bd07f
    POP ESI                             ; 004bd080
    POP EBX                             ; 004bd081
    RET                                 ; 004bd082
    LEA EAX,[ESP + 0x900]               ; 004bd083
        ;   Label: LAB_004bd083
    PUSH EAX                            ; 004bd08a
    PUSH 0x5d8796                       ; 004bd08b | = "Can't open %s"
    MOV EAX,[0x006138e0]                ; 004bd090 | g_CEditorToolsPtr
    PUSH EAX                            ; 004bd095
    CALL shape_edittool.cpp_FUN_0047be40 ; 004bd096
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0xc                         ; 004bd09b
    MOV EAX,dword ptr [ESP + 0xa48]     ; 004bd09e
        ;   Label: LAB_004bd09e
    MOV byte ptr [EAX + 0x8d8],0x0      ; 004bd0a5
    MOV EBP,dword ptr [0x006141b8]      ; 004bd0ac | DAT_006141b8
    ADD ESP,0xa34                       ; 004bd0b2
    POP EBP                             ; 004bd0b8
    POP EDI                             ; 004bd0b9
    POP ESI                             ; 004bd0ba
    POP EBX                             ; 004bd0bb
    RET                                 ; 004bd0bc
    XOR EAX,EAX                         ; 004bd0bd
        ;   Label: LAB_004bd0bd
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x402] ; 004bd0bf
    XOR EDX,EDX                         ; 004bd0c6
    MOV dword ptr [ESP + 0xa14],EAX     ; 004bd0c8
    XOR EAX,EAX                         ; 004bd0cf
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x401] ; 004bd0d1
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x400] ; 004bd0d8
    CMP EDI,0x20                        ; 004bd0df
    JNZ 0x004bd118                      ; 004bd0e2
        ;   XREF to: 004bd118 (CONDITIONAL_JUMP)  ; LAB_004bd118
    MOV CL,byte ptr [0x01c35814]        ; 004bd0e4 | DAT_01c35814
    SHL EAX,CL                          ; 004bd0ea
    MOV CL,byte ptr [0x01c35820]        ; 004bd0ec | DAT_01c35820
    SHL EDX,CL                          ; 004bd0f2
    MOV CL,byte ptr [0x01c3582c]        ; 004bd0f4 | DAT_01c3582c
    OR EAX,EDX                          ; 004bd0fa
    MOV EDX,dword ptr [ESP + 0xa14]     ; 004bd0fc
    SHL EDX,CL                          ; 004bd103
    MOV ECX,EDX                         ; 004bd105
    OR ECX,EAX                          ; 004bd107
    MOV EAX,dword ptr [ESP + 0xa20]     ; 004bd109
    MOV dword ptr [ESP + EAX*0x1],ECX   ; 004bd110
    JMP 0x004bcdb4                      ; 004bd113
        ;   XREF to: 004bcdb4 (UNCONDITIONAL_JUMP)  ; LAB_004bcdb4
    MOV ECX,EAX                         ; 004bd118
        ;   Label: LAB_004bd118
    SHL EDX,0x8                         ; 004bd11a
    SHL ECX,0x10                        ; 004bd11d
    MOV EDI,dword ptr [ESP + 0xa14]     ; 004bd120
    OR ECX,EDX                          ; 004bd127
    OR ECX,EDI                          ; 004bd129
    MOV EAX,dword ptr [ESP + 0xa20]     ; 004bd12b
    MOV dword ptr [ESP + EAX*0x1],ECX   ; 004bd132
    JMP 0x004bcdb4                      ; 004bd135
        ;   XREF to: 004bcdb4 (UNCONDITIONAL_JUMP)  ; LAB_004bcdb4
    MOV EDX,dword ptr [EDI + 0x1c2a38c] ; 004bd13a | DAT_01c2a38c
        ;   Label: LAB_004bd13a
    ADD EDX,EBX                         ; 004bd140
    MOV AL,byte ptr [EAX]               ; 004bd142
    AND EAX,0xff                        ; 004bd144
    MOV EAX,dword ptr [ESP + EAX*0x4]   ; 004bd149
    MOV dword ptr [EDX],EAX             ; 004bd14c
    JMP 0x004bcf64                      ; 004bd14e
        ;   XREF to: 004bcf64 (UNCONDITIONAL_JUMP)  ; LAB_004bcf64
    MOV ECX,dword ptr [ESP + 0xa48]     ; 004bd153
        ;   Label: LAB_004bd153
    MOV ESI,dword ptr [ECX + 0x48]      ; 004bd15a
    MOV EAX,[0x00617dd4]                ; 004bd15d | DAT_00617dd4
    PUSH ESI                            ; 004bd162
    MOV EDX,dword ptr [EAX]             ; 004bd163 | DAT_01d02f84
    PUSH EAX                            ; 004bd165 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004bd166
    ADD ESP,0x8                         ; 004bd168
    TEST EAX,EAX                        ; 004bd16b
    JNZ 0x004bcfe9                      ; 004bd16d
        ;   XREF to: 004bcfe9 (CONDITIONAL_JUMP)  ; LAB_004bcfe9
    CMP dword ptr [0x01c2a384],0x0      ; 004bd173 | DAT_01c2a384
    JNZ 0x004bcfe9                      ; 004bd17a
        ;   XREF to: 004bcfe9 (CONDITIONAL_JUMP)  ; LAB_004bcfe9
    CMP dword ptr [0x01cb80cc],0x1      ; 004bd180 | DAT_01cb80cc
    JNZ 0x004bd19d                      ; 004bd187
        ;   XREF to: 004bd19d (CONDITIONAL_JUMP)  ; LAB_004bd19d
    MOV EAX,[0x00616494]                ; 004bd189 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004bd18e | g_CGameInstance.field644_0x284
    FSUBR float ptr [EBX]               ; 004bd194
    FSTP float ptr [EBX]                ; 004bd196
    JMP 0x004bcfbe                      ; 004bd198
        ;   XREF to: 004bcfbe (UNCONDITIONAL_JUMP)  ; LAB_004bcfbe
    MOV EAX,dword ptr [ESP + 0xa48]     ; 004bd19d
        ;   Label: LAB_004bd19d
    FLDZ                                ; 004bd1a4
    FCOMP float ptr [EAX + 0x3a8]       ; 004bd1a6
    FNSTSW AX                           ; 004bd1ac
    SAHF                                ; 004bd1ae
    JA 0x004bcfe9                       ; 004bd1af
        ;   XREF to: 004bcfe9 (CONDITIONAL_JUMP)  ; LAB_004bcfe9
    MOV EAX,[0x00616494]                ; 004bd1b5 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004bd1ba | g_CGameInstance.field644_0x284
    FSUBR float ptr [EBX]               ; 004bd1c0
    FSTP float ptr [EBX]                ; 004bd1c2
    JMP 0x004bcfbe                      ; 004bd1c4
        ;   XREF to: 004bcfbe (UNCONDITIONAL_JUMP)  ; LAB_004bcfbe
    MOV ECX,dword ptr [ESP + 0xa48]     ; 004bd1c9
        ;   Label: LAB_004bd1c9
    MOV ESI,dword ptr [ECX + 0x48]      ; 004bd1d0
    MOV EAX,[0x00617dd4]                ; 004bd1d3 | DAT_00617dd4
    PUSH ESI                            ; 004bd1d8
    MOV EDX,dword ptr [EAX]             ; 004bd1d9 | DAT_01d02f84
    PUSH EAX                            ; 004bd1db | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004bd1dc
    ADD ESP,0x8                         ; 004bd1de
    TEST EAX,EAX                        ; 004bd1e1
    JNZ 0x004bcff7                      ; 004bd1e3
        ;   XREF to: 004bcff7 (CONDITIONAL_JUMP)  ; LAB_004bcff7
    MOV EDI,dword ptr [ESP + 0xa48]     ; 004bd1e9
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004bd1f0
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    PUSH EDI                            ; 004bd1f5
    CALL core_game.cpp_FUN_004b8250     ; 004bd1f6
        ;   XREF to: 004b8250 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b8250(CGame * this_ptr)
    ADD ESP,0x4                         ; 004bd1fb
    PUSH EDI                            ; 004bd1fe
    CALL core_game.cpp_FUN_004b3000     ; 004bd1ff
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b3000(CGame * this_ptr)
    ADD ESP,0x4                         ; 004bd204
    MOV EDX,dword ptr [ESP + 0xa2c]     ; 004bd207
    PUSH EDX                            ; 004bd20e
    MOV byte ptr [EDI + 0x8d8],0x0      ; 004bd20f
    CALL crt_unknown.c_FUN_005b86a0     ; 004bd216
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 004bd21b
    XOR ECX,ECX                         ; 004bd21e
    MOV EBX,dword ptr [0x006141bc]      ; 004bd220 | DAT_006141bc
    MOV dword ptr [ESP + 0xa24],ECX     ; 004bd226
    TEST EBX,EBX                        ; 004bd22d
    JLE 0x004bcc10                      ; 004bd22f
        ;   XREF to: 004bcc10 (CONDITIONAL_JUMP)  ; LAB_004bcc10
    MOV dword ptr [ESP + 0xa18],ECX     ; 004bd235
    MOV EBP,dword ptr [0x006141b8]      ; 004bd23c | DAT_006141b8
        ;   Label: LAB_004bd23c
    XOR EBX,EBX                         ; 004bd242
    TEST EBP,EBP                        ; 004bd244
    JLE 0x004bd282                      ; 004bd246
        ;   XREF to: 004bd282 (CONDITIONAL_JUMP)  ; LAB_004bd282
    MOV ESI,dword ptr [ESP + 0xa18]     ; 004bd248
    XOR EDX,EDX                         ; 004bd24f
    XOR ECX,ECX                         ; 004bd251
    CMP dword ptr [0x006141c0],0x10     ; 004bd253 | DAT_006141c0
        ;   Label: LAB_004bd253
    JZ 0x004bd2cb                       ; 004bd25a
        ;   XREF to: 004bd2cb (CONDITIONAL_JUMP)  ; LAB_004bd2cb
    MOV EAX,dword ptr [ESI + 0x1c2a38c] ; 004bd25c | DAT_01c2a38c
    ADD EAX,EDX                         ; 004bd262
    MOV dword ptr [ESP + 0xa10],EAX     ; 004bd264
    MOV EDI,dword ptr [ESP + 0xa10]     ; 004bd26b
    MOV EAX,dword ptr [ESP]             ; 004bd272
    MOV dword ptr [EDI],EAX             ; 004bd275
    ADD EDX,0x4                         ; 004bd277
        ;   Label: LAB_004bd277
    INC EBX                             ; 004bd27a
    ADD ECX,0x2                         ; 004bd27b
    CMP EBX,EBP                         ; 004bd27e
    JL 0x004bd253                       ; 004bd280
        ;   XREF to: 004bd253 (CONDITIONAL_JUMP)  ; LAB_004bd253
    MOV ECX,dword ptr [ESP + 0xa18]     ; 004bd282
        ;   Label: LAB_004bd282
    MOV EBX,dword ptr [ESP + 0xa24]     ; 004bd289
    MOV ESI,dword ptr [0x006141bc]      ; 004bd290 | DAT_006141bc
    MOV dword ptr [0x006141b8],EBP      ; 004bd296 | DAT_006141b8
    ADD ECX,0x4                         ; 004bd29c
    INC EBX                             ; 004bd29f
    MOV dword ptr [ESP + 0xa18],ECX     ; 004bd2a0
    MOV dword ptr [ESP + 0xa24],EBX     ; 004bd2a7
    CMP EBX,ESI                         ; 004bd2ae
    JGE 0x004bcc10                      ; 004bd2b0
        ;   XREF to: 004bcc10 (CONDITIONAL_JUMP)  ; LAB_004bcc10
    JMP 0x004bd23c                      ; 004bd2b6
        ;   XREF to: 004bd23c (UNCONDITIONAL_JUMP)  ; LAB_004bd23c
    PUSH EAX                            ; 004bd2b8
        ;   Label: LAB_004bd2b8
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b7140 ; 004bd2b9
        ;   XREF to: 004b7140 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b7140(CGame * this_ptr)
    ADD ESP,0x4                         ; 004bd2be
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 004bd2c1
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
    JMP 0x004bcfeb                      ; 004bd2c6
        ;   XREF to: 004bcfeb (UNCONDITIONAL_JUMP)  ; LAB_004bcfeb
    MOV EAX,dword ptr [ESI + 0x1c2a38c] ; 004bd2cb
        ;   Label: LAB_004bd2cb
    ADD EAX,ECX                         ; 004bd2d1
    MOV dword ptr [ESP + 0xa0c],EAX     ; 004bd2d3
    MOV EDI,dword ptr [ESP + 0xa0c]     ; 004bd2da
    MOV EAX,dword ptr [ESP + 0x700]     ; 004bd2e1
    MOV word ptr [EDI],AX               ; 004bd2e8
    JMP 0x004bd277                      ; 004bd2eb
        ;   XREF to: 004bd277 (UNCONDITIONAL_JUMP)  ; LAB_004bd277

