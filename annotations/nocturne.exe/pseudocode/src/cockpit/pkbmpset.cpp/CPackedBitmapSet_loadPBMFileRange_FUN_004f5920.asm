; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_004f5920(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,int apply_palette_flag)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename_format
; int              Stack[0xc]:4   start_index
; int              Stack[0x10]:4   end_index
; int              Stack[0x14]:4   apply_palette_flag
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40
;   cockpit_pkbitmap.cpp_FUN_004f5290
;   cockpit_pkbitmap.cpp_FUN_004f52c0
;   cockpit_pkbitmap.cpp_FUN_004f5320
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5920
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_004f5920
    PUSH ESI                            ; 004f5921
    PUSH EDI                            ; 004f5922
    PUSH EBP                            ; 004f5923
    SUB ESP,0x64                        ; 004f5924
    MOV EDI,dword ptr [ESP + 0x78]      ; 004f5927
    MOV ESI,dword ptr [ESP + 0x80]      ; 004f592b
    MOV EBP,dword ptr [ESP + 0x84]      ; 004f5932
    PUSH EDI                            ; 004f5939
    CALL cockpit_pkbitmap.cpp_FUN_004f5320 ; 004f593a
        ;   XREF to: 004f5320 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f5320()
    ADD ESP,0x4                         ; 004f593f
    PUSH EDI                            ; 004f5942
    CALL cockpit_pkbitmap.cpp_FUN_004f5290 ; 004f5943
        ;   XREF to: 004f5290 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f5290()
    MOV EAX,EBP                         ; 004f5948
    SUB EAX,ESI                         ; 004f594a
    ADD ESP,0x4                         ; 004f594c
    INC EAX                             ; 004f594f
    PUSH EAX                            ; 004f5950
    PUSH EDI                            ; 004f5951
    MOV EBX,ESI                         ; 004f5952
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350 ; 004f5954
        ;   XREF to: 004f5350 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350(CPackedBitmapSet * this_ptr, int bitmap_count)
    ADD ESP,0x8                         ; 004f5959
    CMP ESI,EBP                         ; 004f595c
    JG 0x004f59b0                       ; 004f595e
        ;   XREF to: 004f59b0 (CONDITIONAL_JUMP)  ; LAB_004f59b0
    LEA EAX,[ESI*0x8 + 0x0]             ; 004f5960
    ADD EAX,ESI                         ; 004f5967
    SHL EAX,0x2                         ; 004f5969
    MOV ESI,EAX                         ; 004f596c
    NEG ESI                             ; 004f596e
    ADD ESI,EAX                         ; 004f5970
    PUSH EBX                            ; 004f5972
        ;   Label: LAB_004f5972
    MOV EDX,dword ptr [ESP + 0x80]      ; 004f5973
    PUSH EDX                            ; 004f597a
    LEA EAX,[ESP + 0x8]                 ; 004f597b
    PUSH EAX                            ; 004f597f
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f5980
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004f5985
    MOV ECX,dword ptr [ESP + 0x88]      ; 004f5988
    PUSH ECX                            ; 004f598f
    LEA EAX,[ESP + 0x4]                 ; 004f5990
    PUSH EAX                            ; 004f5994
    MOV EAX,dword ptr [EDI + 0x4]       ; 004f5995
    ADD EAX,ESI                         ; 004f5998
    PUSH EAX                            ; 004f599a
    INC EBX                             ; 004f599b
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40 ; 004f599c
        ;   XREF to: 004f4e40 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40(CPackedBitmap * this_ptr, char * filename, int apply_palette_flag)
    ADD ESI,0x24                        ; 004f59a1
    ADD ESP,0xc                         ; 004f59a4
    CMP EBX,EBP                         ; 004f59a7
    JLE 0x004f5972                      ; 004f59a9
        ;   XREF to: 004f5972 (CONDITIONAL_JUMP)  ; LAB_004f5972
    LEA EAX,[EAX]                       ; 004f59ab
    MOV ECX,ECX                         ; 004f59ae
    PUSH EDI                            ; 004f59b0
        ;   Label: LAB_004f59b0
    CALL cockpit_pkbitmap.cpp_FUN_004f52c0 ; 004f59b1
        ;   XREF to: 004f52c0 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f52c0()
    ADD ESP,0x4                         ; 004f59b6
    ADD ESP,0x64                        ; 004f59b9
    POP EBP                             ; 004f59bc
    POP EDI                             ; 004f59bd
    POP ESI                             ; 004f59be
    POP EBX                             ; 004f59bf
    RET                                 ; 004f59c0

