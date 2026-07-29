; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0(CPackedBitmapSet *this_ptr,char *filename_format,int width,int height,int start_index,int end_index,int transparency_color,int apply_palette_flag)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename_format
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   start_index
; int              Stack[0x18]:4   end_index
; int              Stack[0x1c]:4   transparency_color
; int              Stack[0x20]:4   apply_palette_flag
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630
;   cockpit_pkbitmap.cpp_FUN_004f5290
;   cockpit_pkbitmap.cpp_FUN_004f5320
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f53f0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0
    PUSH ESI                            ; 004f53f1
    PUSH EDI                            ; 004f53f2
    PUSH EBP                            ; 004f53f3
    SUB ESP,0x64                        ; 004f53f4
    MOV EDI,dword ptr [ESP + 0x78]      ; 004f53f7
    MOV ESI,dword ptr [ESP + 0x88]      ; 004f53fb
    MOV EBP,dword ptr [ESP + 0x8c]      ; 004f5402
    PUSH EDI                            ; 004f5409
    CALL cockpit_pkbitmap.cpp_FUN_004f5320 ; 004f540a
        ;   XREF to: 004f5320 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f5320()
    ADD ESP,0x4                         ; 004f540f
    PUSH EDI                            ; 004f5412
    CALL cockpit_pkbitmap.cpp_FUN_004f5290 ; 004f5413
        ;   XREF to: 004f5290 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f5290()
    MOV EAX,EBP                         ; 004f5418
    SUB EAX,ESI                         ; 004f541a
    ADD ESP,0x4                         ; 004f541c
    INC EAX                             ; 004f541f
    PUSH EAX                            ; 004f5420
    PUSH EDI                            ; 004f5421
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350 ; 004f5422
        ;   XREF to: 004f5350 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350(CPackedBitmapSet * this_ptr, int bitmap_count)
    ADD ESP,0x8                         ; 004f5427
    MOV EAX,dword ptr [ESP + 0x84]      ; 004f542a
    MOV dword ptr [EDI + 0x20],EAX      ; 004f5431
    MOV EAX,dword ptr [ESP + 0x80]      ; 004f5434
    MOV EBX,ESI                         ; 004f543b
    MOV dword ptr [EDI + 0x1c],EAX      ; 004f543d
    CMP ESI,EBP                         ; 004f5440
    JG 0x004f54b0                       ; 004f5442
        ;   XREF to: 004f54b0 (CONDITIONAL_JUMP)  ; LAB_004f54b0
    LEA EAX,[ESI*0x8 + 0x0]             ; 004f5444
    ADD EAX,ESI                         ; 004f544b
    SHL EAX,0x2                         ; 004f544d
    MOV ESI,EAX                         ; 004f5450
    NEG ESI                             ; 004f5452
    ADD ESI,EAX                         ; 004f5454
    PUSH EBX                            ; 004f5456
        ;   Label: LAB_004f5456
    MOV EDX,dword ptr [ESP + 0x80]      ; 004f5457
    PUSH EDX                            ; 004f545e
    LEA EAX,[ESP + 0x8]                 ; 004f545f
    PUSH EAX                            ; 004f5463
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f5464
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004f5469
    MOV ECX,dword ptr [ESP + 0x94]      ; 004f546c
    PUSH ECX                            ; 004f5473
    MOV EAX,dword ptr [ESP + 0x94]      ; 004f5474
    PUSH EAX                            ; 004f547b
    MOV EDX,dword ptr [ESP + 0x8c]      ; 004f547c
    PUSH EDX                            ; 004f5483
    MOV ECX,dword ptr [ESP + 0x8c]      ; 004f5484
    PUSH ECX                            ; 004f548b
    LEA EAX,[ESP + 0x10]                ; 004f548c
    PUSH EAX                            ; 004f5490
    MOV EAX,dword ptr [EDI + 0x4]       ; 004f5491
    ADD EAX,ESI                         ; 004f5494
    PUSH EAX                            ; 004f5496
    INC EBX                             ; 004f5497
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630 ; 004f5498
        ;   XREF to: 004f4630 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630()
    ADD ESI,0x24                        ; 004f549d
    ADD ESP,0x18                        ; 004f54a0
    CMP EBX,EBP                         ; 004f54a3
    JLE 0x004f5456                      ; 004f54a5
        ;   XREF to: 004f5456 (CONDITIONAL_JUMP)  ; LAB_004f5456
    LEA EAX,[EAX]                       ; 004f54a7
    LEA EDX,[EDX]                       ; 004f54ad
    ADD ESP,0x64                        ; 004f54b0
        ;   Label: LAB_004f54b0
    POP EBP                             ; 004f54b3
    POP EDI                             ; 004f54b4
    POP ESI                             ; 004f54b5
    POP EBX                             ; 004f54b6
    RET                                 ; 004f54b7

