; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00479240(char *directory_path,char *filename,uint mode_flags,ifstream *file_stream)
;
; Parameters:
; char *           Stack[0x4]:4   directory_path
; char *           Stack[0x8]:4   filename
; uint             Stack[0xc]:4   mode_flags
; ifstream *       Stack[0x10]:4   file_stream
;
; Referenced Globals:
;   undefined4 DAT_00608528
;
; Called Functions:
;   crt_unknown.c_fflush_FUN_005c1f9c
;   crt_unknown.c_ios_clear_FUN_005c1fd7
;   crt_unknown.c_istream_seekg_FUN_005c2078
;   crt_unknown.c_openFile_FUN_005c2019
;   crt_watcom.c__mkdir_FUN_005c2000
;   engine_dosio.cpp_findFile_FUN_00478e90
;   engine_dosio.cpp_FUN_00478e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479240
        ;   Label: engine_dosio.cpp_reopenFileStream_FUN_00479240
    PUSH ESI                            ; 00479241
    PUSH EBP                            ; 00479242
    SUB ESP,0x214                       ; 00479243
    MOV ESI,dword ptr [ESP + 0x224]     ; 00479249
    MOV EBX,dword ptr [ESP + 0x230]     ; 00479250
    PUSH EBX                            ; 00479257
    CALL crt_unknown.c_fflush_FUN_005c1f9c ; 00479258
        ;   XREF to: 005c1f9c (UNCONDITIONAL_CALL)  ; void crt_unknown.c_fflush_FUN_005c1f9c(_FILE * stream)
    MOV EAX,dword ptr [EBX]             ; 0047925d
    ADD ESP,0x4                         ; 0047925f
    MOV EAX,dword ptr [EAX + 0x4]       ; 00479262
    PUSH 0x0                            ; 00479265
    ADD EAX,EBX                         ; 00479267
    PUSH EAX                            ; 00479269
    CALL crt_unknown.c_ios_clear_FUN_005c1fd7 ; 0047926a
        ;   XREF to: 005c1fd7 (UNCONDITIONAL_CALL)  ; uint crt_unknown.c_ios_clear_FUN_005c1fd7(ios * this_ptr, uint state_flags)
    ADD ESP,0x8                         ; 0047926f
    MOV EDX,dword ptr [ESP + 0x228]     ; 00479272
    PUSH EDX                            ; 00479279
    PUSH ESI                            ; 0047927a
    LEA EAX,[ESP + 0x8]                 ; 0047927b
    PUSH EAX                            ; 0047927f
    CALL engine_dosio.cpp_FUN_00478e20  ; 00479280
        ;   XREF to: 00478e20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00478e20()
    ADD ESP,0xc                         ; 00479285
    TEST byte ptr [ESP + 0x22c],0x52    ; 00479288
    JZ 0x004792c5                       ; 00479290
        ;   XREF to: 004792c5 (CONDITIONAL_JUMP)  ; LAB_004792c5
    TEST ESI,ESI                        ; 00479292
    JZ 0x0047929f                       ; 00479294
        ;   XREF to: 0047929f (CONDITIONAL_JUMP)  ; LAB_0047929f
    PUSH ESI                            ; 00479296
    CALL crt_watcom.c__mkdir_FUN_005c2000 ; 00479297
        ;   XREF to: 005c2000 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_005c2000(char * path)
    ADD ESP,0x4                         ; 0047929c
    MOV EAX,[0x00608528]                ; 0047929f | DAT_00608528
        ;   Label: LAB_0047929f
    PUSH EAX                            ; 004792a4
    MOV EBP,dword ptr [ESP + 0x230]     ; 004792a5
    PUSH EBP                            ; 004792ac
    LEA EAX,[ESP + 0x8]                 ; 004792ad
    PUSH EAX                            ; 004792b1
    PUSH EBX                            ; 004792b2
    CALL crt_unknown.c_openFile_FUN_005c2019 ; 004792b3
        ;   XREF to: 005c2019 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_openFile_FUN_005c2019(void * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004792b8
    ADD ESP,0x214                       ; 004792bb
        ;   Label: LAB_004792bb
    POP EBP                             ; 004792c1
    POP ESI                             ; 004792c2
    POP EBX                             ; 004792c3
    RET                                 ; 004792c4
    MOV EAX,ESP                         ; 004792c5
        ;   Label: LAB_004792c5
    PUSH EAX                            ; 004792c7
    CALL engine_dosio.cpp_findFile_FUN_00478e90 ; 004792c8
        ;   XREF to: 00478e90 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFile_FUN_00478e90(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 004792cd
    TEST EAX,EAX                        ; 004792d0
    JZ 0x004792bb                       ; 004792d2
        ;   XREF to: 004792bb (CONDITIONAL_JUMP)  ; LAB_004792bb
    MOV EAX,[0x00608528]                ; 004792d4 | DAT_00608528
    PUSH EAX                            ; 004792d9
    MOV ECX,dword ptr [ESP + 0x230]     ; 004792da
    PUSH ECX                            ; 004792e1
    LEA EAX,[ESP + 0x108]               ; 004792e2
    PUSH EAX                            ; 004792e9
    PUSH EBX                            ; 004792ea
    CALL crt_unknown.c_openFile_FUN_005c2019 ; 004792eb
        ;   XREF to: 005c2019 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_openFile_FUN_005c2019(void * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004792f0
    MOV ESI,dword ptr [ESP + 0x200]     ; 004792f3
    TEST ESI,ESI                        ; 004792fa
    JZ 0x004792bb                       ; 004792fc
        ;   XREF to: 004792bb (CONDITIONAL_JUMP)  ; LAB_004792bb
    PUSH ESI                            ; 004792fe
    ADD EBX,0x44                        ; 004792ff
    PUSH EBX                            ; 00479302
    CALL crt_unknown.c_istream_seekg_FUN_005c2078 ; 00479303
        ;   XREF to: 005c2078 (UNCONDITIONAL_CALL)  ; _istream * crt_unknown.c_istream_seekg_FUN_005c2078(void * this_ptr, int offset)
    ADD ESP,0x8                         ; 00479308
    ADD ESP,0x214                       ; 0047930b
    POP EBP                             ; 00479311
    POP ESI                             ; 00479312
    POP EBX                             ; 00479313
    RET                                 ; 00479314

