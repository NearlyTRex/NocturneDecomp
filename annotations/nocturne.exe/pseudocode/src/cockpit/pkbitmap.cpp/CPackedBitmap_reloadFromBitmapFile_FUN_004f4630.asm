; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   transparency_color
; int              Stack[0x18]:4   apply_palette_flag
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_004f3eb0 at 004f3ee8
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0 at 004f5498
;
; Called Functions:
;   cockpit_ckptutil.c_readBitmapFile_FUN_0042d240
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0
;   cockpit_pkbitmap.cpp_CPackedBitmap_FUN_004f3f50
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4630
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630
    PUSH ESI                            ; 004f4631
    PUSH EDI                            ; 004f4632
    PUSH EBP                            ; 004f4633
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f4634
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f4638
    PUSH EBX                            ; 004f463c
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_FUN_004f3f50 ; 004f463d
        ;   XREF to: 004f3f50 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_FUN_004f3f50(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 004f4642
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f4645
    PUSH EDX                            ; 004f4649
    PUSH EBX                            ; 004f464a
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0 ; 004f464b
        ;   XREF to: 004f3fc0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004f4650
    MOV ESI,dword ptr [ESP + 0x20]      ; 004f4653
    IMUL ESI,EDI                        ; 004f4657
    PUSH ESI                            ; 004f465a
    PUSH 0x0                            ; 004f465b
    PUSH EBX                            ; 004f465d
    CALL cockpit_ckptutil.c_readBitmapFile_FUN_0042d240 ; 004f465e
        ;   XREF to: 0042d240 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_readBitmapFile_FUN_0042d240(char * filename, void * buffer, int size)
    ADD ESP,0xc                         ; 004f4663
    PUSH EDI                            ; 004f4666
    MOV ECX,dword ptr [ESP + 0x28]      ; 004f4667
    PUSH ECX                            ; 004f466b
    MOV EBP,dword ptr [ESP + 0x28]      ; 004f466c
    PUSH EBP                            ; 004f4670
    PUSH EDI                            ; 004f4671
    PUSH EAX                            ; 004f4672
    PUSH EBX                            ; 004f4673
    MOV ESI,EAX                         ; 004f4674
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0 ; 004f4676
        ;   XREF to: 004f47b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, ...)
    ADD ESP,0x18                        ; 004f467b
    PUSH ESI                            ; 004f467e
    CALL crt_memory.c_free_FUN_005638d0 ; 004f467f
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 004f4684
    CMP dword ptr [ESP + 0x28],0x0      ; 004f4687
    JNZ 0x004f4693                      ; 004f468c
        ;   XREF to: 004f4693 (CONDITIONAL_JUMP)  ; LAB_004f4693
    POP EBP                             ; 004f468e
    POP EDI                             ; 004f468f
    POP ESI                             ; 004f4690
    POP EBX                             ; 004f4691
    RET                                 ; 004f4692
    PUSH EBX                            ; 004f4693
        ;   Label: LAB_004f4693
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0 ; 004f4694
        ;   XREF to: 004f4ab0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 004f4699
    POP EBP                             ; 004f469c
    POP EDI                             ; 004f469d
    POP ESI                             ; 004f469e
    POP EBX                             ; 004f469f
    RET                                 ; 004f46a0

