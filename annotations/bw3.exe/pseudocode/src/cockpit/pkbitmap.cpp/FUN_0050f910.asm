; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_FUN_0050f910(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)
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
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0050f190 at 0050f1c8
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00510740 at 005107e8
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00438ef0
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0050fd90
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0050fa90
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0050f2a0
;   cockpit_pkbitmap.cpp_FUN_0050f230
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f910
        ;   Label: cockpit_pkbitmap.cpp_FUN_0050f910
    PUSH ESI                            ; 0050f911
    PUSH EDI                            ; 0050f912
    PUSH EBP                            ; 0050f913
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050f914
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0050f918
    PUSH EBX                            ; 0050f91c
    CALL cockpit_pkbitmap.cpp_FUN_0050f230 ; 0050f91d
        ;   XREF to: 0050f230 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_0050f230()
    ADD ESP,0x4                         ; 0050f922
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050f925
    PUSH EDX                            ; 0050f929
    PUSH EBX                            ; 0050f92a
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0050f2a0 ; 0050f92b
        ;   XREF to: 0050f2a0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0050f2a0(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0050f930
    MOV ESI,dword ptr [ESP + 0x20]      ; 0050f933
    IMUL ESI,EDI                        ; 0050f937
    PUSH ESI                            ; 0050f93a
    PUSH 0x0                            ; 0050f93b
    PUSH EBX                            ; 0050f93d
    CALL cockpit_ckptutil.c_FUN_00438ef0 ; 0050f93e
        ;   XREF to: 00438ef0 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_FUN_00438ef0(char * filename, void * buffer, int size)
    ADD ESP,0xc                         ; 0050f943
    PUSH EDI                            ; 0050f946
    MOV ECX,dword ptr [ESP + 0x28]      ; 0050f947
    PUSH ECX                            ; 0050f94b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0050f94c
    PUSH EBP                            ; 0050f950
    PUSH EDI                            ; 0050f951
    PUSH EAX                            ; 0050f952
    PUSH EBX                            ; 0050f953
    MOV ESI,EAX                         ; 0050f954
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0050fa90 ; 0050f956
        ;   XREF to: 0050fa90 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0050fa90(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, ...)
    ADD ESP,0x18                        ; 0050f95b
    PUSH ESI                            ; 0050f95e
    CALL crt_unknown.c_FUN_005a3770     ; 0050f95f
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0050f964
    CMP dword ptr [ESP + 0x28],0x0      ; 0050f967
    JNZ 0x0050f973                      ; 0050f96c
        ;   XREF to: 0050f973 (CONDITIONAL_JUMP)  ; LAB_0050f973
    POP EBP                             ; 0050f96e
    POP EDI                             ; 0050f96f
    POP ESI                             ; 0050f970
    POP EBX                             ; 0050f971
    RET                                 ; 0050f972
    PUSH EBX                            ; 0050f973
        ;   Label: LAB_0050f973
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0050fd90 ; 0050f974
        ;   XREF to: 0050fd90 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0050fd90(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0050f979
    POP EBP                             ; 0050f97c
    POP EDI                             ; 0050f97d
    POP ESI                             ; 0050f97e
    POP EBX                             ; 0050f97f
    RET                                 ; 0050f980

