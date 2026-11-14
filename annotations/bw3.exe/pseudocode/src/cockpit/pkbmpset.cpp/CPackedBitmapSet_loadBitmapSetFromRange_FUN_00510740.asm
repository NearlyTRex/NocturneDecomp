; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00510740(CPackedBitmapSet *this_ptr,undefined4 param_2,undefined4 param_3,char *param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; char *           Stack[0x10]:4   param_4
; int              Stack[0x14]:4   param_5
; int              Stack[0x18]:4   param_6
; undefined4       Stack[0x1c]:4   param_7
; undefined4       Stack[0x20]:4   param_8
; int              Stack[0x24]:4   param_9
; int              Stack[0x28]:4   param_10
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_005105e0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670
;   cockpit_pkbmpset.cpp_FUN_005106a0
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510740
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00510740
    PUSH ESI                            ; 00510741
    PUSH EDI                            ; 00510742
    PUSH EBP                            ; 00510743
    SUB ESP,0x64                        ; 00510744
    MOV EDI,dword ptr [ESP + 0x78]      ; 00510747
    MOV ESI,dword ptr [ESP + 0x88]      ; 0051074b
    MOV EBP,dword ptr [ESP + 0x8c]      ; 00510752
    PUSH EDI                            ; 00510759
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670 ; 0051075a
        ;   XREF to: 00510670 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 0051075f
    PUSH EDI                            ; 00510762
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_005105e0 ; 00510763
        ;   XREF to: 005105e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_005105e0(CPackedBitmapSet * this_ptr)
    MOV EAX,EBP                         ; 00510768
    SUB EAX,ESI                         ; 0051076a
    ADD ESP,0x4                         ; 0051076c
    INC EAX                             ; 0051076f
    PUSH EAX                            ; 00510770
    PUSH EDI                            ; 00510771
    CALL cockpit_pkbmpset.cpp_FUN_005106a0 ; 00510772
        ;   XREF to: 005106a0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_FUN_005106a0(CPackedBitmapSet * this_ptr, int bitmap_count)
    ADD ESP,0x8                         ; 00510777
    MOV EAX,dword ptr [ESP + 0x84]      ; 0051077a
    MOV dword ptr [EDI + 0x20],EAX      ; 00510781
    MOV EAX,dword ptr [ESP + 0x80]      ; 00510784
    MOV EBX,ESI                         ; 0051078b
    MOV dword ptr [EDI + 0x1c],EAX      ; 0051078d
    CMP ESI,EBP                         ; 00510790
    JG 0x00510800                       ; 00510792
        ;   XREF to: 00510800 (CONDITIONAL_JUMP)  ; LAB_00510800
    LEA EAX,[ESI*0x8 + 0x0]             ; 00510794
    ADD EAX,ESI                         ; 0051079b
    SHL EAX,0x2                         ; 0051079d
    MOV ESI,EAX                         ; 005107a0
    NEG ESI                             ; 005107a2
    ADD ESI,EAX                         ; 005107a4
    PUSH EBX                            ; 005107a6
        ;   Label: LAB_005107a6
    MOV EDX,dword ptr [ESP + 0x80]      ; 005107a7
    PUSH EDX                            ; 005107ae
    LEA EAX,[ESP + 0x8]                 ; 005107af
    PUSH EAX                            ; 005107b3
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005107b4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005107b9
    MOV ECX,dword ptr [ESP + 0x94]      ; 005107bc
    PUSH ECX                            ; 005107c3
    MOV EAX,dword ptr [ESP + 0x94]      ; 005107c4
    PUSH EAX                            ; 005107cb
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005107cc
    PUSH EDX                            ; 005107d3
    MOV ECX,dword ptr [ESP + 0x8c]      ; 005107d4
    PUSH ECX                            ; 005107db
    LEA EAX,[ESP + 0x10]                ; 005107dc
    PUSH EAX                            ; 005107e0
    MOV EAX,dword ptr [EDI + 0x4]       ; 005107e1
    ADD EAX,ESI                         ; 005107e4
    PUSH EAX                            ; 005107e6
    INC EBX                             ; 005107e7
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910 ; 005107e8
        ;   XREF to: 0050f910 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910(CPackedBitmap * this_ptr, char * filename, int width, int height, ...)
    ADD ESI,0x24                        ; 005107ed
    ADD ESP,0x18                        ; 005107f0
    CMP EBX,EBP                         ; 005107f3
    JLE 0x005107a6                      ; 005107f5
        ;   XREF to: 005107a6 (CONDITIONAL_JUMP)  ; LAB_005107a6
    LEA EAX,[EAX]                       ; 005107f7
    LEA EDX,[EDX]                       ; 005107fd
    ADD ESP,0x64                        ; 00510800
        ;   Label: LAB_00510800
    POP EBP                             ; 00510803
    POP EDI                             ; 00510804
    POP ESI                             ; 00510805
    POP EBX                             ; 00510806
    RET                                 ; 00510807

