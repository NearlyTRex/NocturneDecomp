; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_applyColorPalette_FUN_004319b0(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; void *           Stack[0x8]:4   bitmap_buffer
; int              Stack[0xc]:4   bitmap_size
; int              Stack[0x10]:4   palette_index
;
; Called Functions:
;   cockpit_ckptutil.c_applyActPalette_FUN_004319b0
;   cockpit_ckptutil.c_readBitmapFile_FUN_00431870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431830
        ;   Label: cockpit_ckptutil.c_applyColorPalette_FUN_004319b0
    PUSH EBP                            ; 00431831
    MOV EBX,dword ptr [ESP + 0x10]      ; 00431832
    TEST EBX,EBX                        ; 00431836
    JNZ 0x0043183d                      ; 00431838
        ;   XREF to: 0043183d (CONDITIONAL_JUMP)  ; LAB_0043183d
    POP EBP                             ; 0043183a
    POP EBX                             ; 0043183b
    RET                                 ; 0043183c
    PUSH EDI                            ; 0043183d
        ;   Label: LAB_0043183d
    PUSH ESI                            ; 0043183e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043183f
    PUSH EDX                            ; 00431843
    PUSH EBX                            ; 00431844
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00431845
    PUSH ECX                            ; 00431849
    CALL cockpit_ckptutil.c_readBitmapFile_FUN_00431870 ; 0043184a
        ;   XREF to: 00431870 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_readBitmapFile_FUN_00431870(char * filename, void * buffer, int size)
    ADD ESP,0xc                         ; 0043184f
    MOV ESI,dword ptr [ESP + 0x20]      ; 00431852
    PUSH ESI                            ; 00431856
    MOV EDI,dword ptr [ESP + 0x20]      ; 00431857
    PUSH EDI                            ; 0043185b
    PUSH EBX                            ; 0043185c
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043185d
    PUSH EBP                            ; 00431861
    CALL cockpit_ckptutil.c_applyActPalette_FUN_004319b0 ; 00431862
        ;   XREF to: 004319b0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_applyActPalette_FUN_004319b0(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index)
    ADD ESP,0x10                        ; 00431867
    POP ESI                             ; 0043186a
    POP EDI                             ; 0043186b
    POP EBP                             ; 0043186c
    POP EBX                             ; 0043186d
    RET                                 ; 0043186e

