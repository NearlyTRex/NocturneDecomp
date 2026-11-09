; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00517130(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   apply_palette_flag
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_005171e0 at 005171eb
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_00516d60
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_00516270
;   cockpit_pkbitmap.cpp_FUN_00516200
;   cockpit_pkbitmap.cpp_FUN_00516f30
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_unknown.c_FUN_005b7790
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517130
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130
    PUSH ESI                            ; 00517131
    SUB ESP,0x64                        ; 00517132
    MOV EBX,dword ptr [ESP + 0x70]      ; 00517135
    PUSH EBX                            ; 00517139
    CALL cockpit_pkbitmap.cpp_FUN_00516200 ; 0051713a
        ;   XREF to: 00516200 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00516200()
    ADD ESP,0x4                         ; 0051713f
    MOV EDX,dword ptr [ESP + 0x74]      ; 00517142
    PUSH EDX                            ; 00517146
    PUSH EBX                            ; 00517147
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_00516270 ; 00517148
        ;   XREF to: 00516270 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_00516270(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0051714d
    PUSH 0x5e1d60                       ; 00517150
    PUSH EBX                            ; 00517155
    PUSH 0x5e1d63                       ; 00517156
    CALL engine_dosio.cpp_FUN_00460c70  ; 0051715b
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00517160
    MOV ESI,EAX                         ; 00517163
    TEST EAX,EAX                        ; 00517165
    JNZ 0x005171a1                      ; 00517167
        ;   XREF to: 005171a1 (CONDITIONAL_JUMP)  ; LAB_005171a1
    PUSH EDI                            ; 00517169
    PUSH EBX                            ; 0051716a
    PUSH 0x5e1d67                       ; 0051716b
    LEA EAX,[ESP + 0xc]                 ; 00517170
    PUSH EAX                            ; 00517174
    MOV EDI,0x51a                       ; 00517175
    CALL crt_unknown.c_FUN_005b7790     ; 0051717a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 0051717f
    LEA EAX,[ESP + 0x4]                 ; 00517182
    MOV ECX,0x5e1d82                    ; 00517186
    PUSH EAX                            ; 0051718b
    MOV dword ptr [0x01d046a4],EDI      ; 0051718c | DAT_01d046a4
    MOV dword ptr [0x01d046a0],ECX      ; 00517192 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 00517198
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051719d
    POP EDI                             ; 005171a0
    PUSH 0x0                            ; 005171a1
        ;   Label: LAB_005171a1
    PUSH ESI                            ; 005171a3
    PUSH EBX                            ; 005171a4
    CALL cockpit_pkbitmap.cpp_FUN_00516f30 ; 005171a5
        ;   XREF to: 00516f30 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_FUN_00516f30(CPackedBitmap * this_ptr, _FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 005171aa
    PUSH ESI                            ; 005171ad
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 005171ae
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 005171b3
    CMP dword ptr [ESP + 0x78],0x0      ; 005171b6
    JNZ 0x005171c3                      ; 005171bb
        ;   XREF to: 005171c3 (CONDITIONAL_JUMP)  ; LAB_005171c3
    ADD ESP,0x64                        ; 005171bd
    POP ESI                             ; 005171c0
    POP EBX                             ; 005171c1
    RET                                 ; 005171c2
    PUSH EBX                            ; 005171c3
        ;   Label: LAB_005171c3
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_00516d60 ; 005171c4
        ;   XREF to: 00516d60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_00516d60(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 005171c9
    ADD ESP,0x64                        ; 005171cc
    POP ESI                             ; 005171cf
    POP EBX                             ; 005171d0
    RET                                 ; 005171d1

