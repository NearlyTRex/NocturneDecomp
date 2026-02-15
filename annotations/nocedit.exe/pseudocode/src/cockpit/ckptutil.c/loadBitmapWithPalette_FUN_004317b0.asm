; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl cockpit_ckptutil_c_loadBitmapWithPalette_FUN_004317b0(char *filename,int width,int height,void *span_data_buffer,void *buffer,int transparent_color_index)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; void *           Stack[0x10]:4   span_data_buffer
; void *           Stack[0x14]:4   buffer
; int              Stack[0x18]:4   transparent_color_index
;
; Referenced Globals:
;   TerminatedCString s_cockpit_ckptutil_c_0061796b
;
; Called Functions:
;   cockpit_ckptutil.c_applyActPalette_FUN_004319b0
;   cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730
;   cockpit_ckptutil.c_readBitmapFile_FUN_00431870
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004317b0
        ;   Label: cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0
    PUSH EDI                            ; 004317b1
    PUSH EBP                            ; 004317b2
    MOV EBP,dword ptr [ESP + 0x10]      ; 004317b3
    MOV EDI,dword ptr [ESP + 0x20]      ; 004317b7
    MOV ESI,dword ptr [ESP + 0x14]      ; 004317bb
    IMUL ESI,dword ptr [ESP + 0x18]     ; 004317bf
    TEST EDI,EDI                        ; 004317c4
    JZ 0x00431811                       ; 004317c6
        ;   XREF to: 00431811 (CONDITIONAL_JUMP)  ; LAB_00431811
    PUSH EBX                            ; 004317c8
        ;   Label: LAB_004317c8
    PUSH ESI                            ; 004317c9
    PUSH EDI                            ; 004317ca
    PUSH EBP                            ; 004317cb
    CALL cockpit_ckptutil.c_readBitmapFile_FUN_00431870 ; 004317cc
        ;   XREF to: 00431870 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_readBitmapFile_FUN_00431870(char * filename, void * buffer, int size)
    ADD ESP,0xc                         ; 004317d1
    MOV ECX,dword ptr [ESP + 0x28]      ; 004317d4
    PUSH ECX                            ; 004317d8
    PUSH ESI                            ; 004317d9
    PUSH EAX                            ; 004317da
    PUSH EBP                            ; 004317db
    MOV EBX,EAX                         ; 004317dc
    MOV EDI,EAX                         ; 004317de
    CALL cockpit_ckptutil.c_applyActPalette_FUN_004319b0 ; 004317e0
        ;   XREF to: 004319b0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_applyActPalette_FUN_004319b0(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index)
    ADD ESP,0x10                        ; 004317e5
    MOV ESI,dword ptr [ESP + 0x20]      ; 004317e8
    TEST ESI,ESI                        ; 004317ec
    JZ 0x0043180a                       ; 004317ee
        ;   XREF to: 0043180a (CONDITIONAL_JUMP)  ; LAB_0043180a
    MOV EAX,dword ptr [ESP + 0x28]      ; 004317f0
    PUSH EAX                            ; 004317f4
    MOV EDX,dword ptr [ESP + 0x20]      ; 004317f5
    PUSH EDX                            ; 004317f9
    MOV ECX,dword ptr [ESP + 0x20]      ; 004317fa
    PUSH ECX                            ; 004317fe
    PUSH ESI                            ; 004317ff
    PUSH EBP                            ; 00431800
    PUSH EBX                            ; 00431801
    CALL cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730 ; 00431802
        ;   XREF to: 00435730 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730(void * bitmap_buffer, char * filename, int width, int height, ...)
    ADD ESP,0x18                        ; 00431807
    MOV EAX,EDI                         ; 0043180a
        ;   Label: LAB_0043180a
    POP EBX                             ; 0043180c
    POP EBP                             ; 0043180d
    POP EDI                             ; 0043180e
    POP ESI                             ; 0043180f
    RET                                 ; 00431810
    PUSH 0x99                           ; 00431811
        ;   Label: LAB_00431811
    PUSH 0x61796b                       ; 00431816 | = "..\\cockpit\\ckptutil.c"
    PUSH ESI                            ; 0043181b
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0043181c
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00431821
    MOV EDI,EAX                         ; 00431824
    TEST EAX,EAX                        ; 00431826
    JNZ 0x004317c8                      ; 00431828
        ;   XREF to: 004317c8 (CONDITIONAL_JUMP)  ; LAB_004317c8
    POP EBP                             ; 0043182a
    POP EDI                             ; 0043182b
    POP ESI                             ; 0043182c
    RET                                 ; 0043182d

