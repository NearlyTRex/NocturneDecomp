; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_FUN_004f4f90(CPackedBitmapSet *bitmap_set_ptr,_FILE *file_handle,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   bitmap_set_ptr
; _FILE *          Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   frames_per_bitmap
; int              Stack[0x10]:4   skip_data_load
; int              Stack[0x14]:4   selected_bitmap_index
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_004f5110 at 004f515f
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d370
;   TerminatedCString s_IO_error_reading_PBG_pos_0058d388
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d3b6
;   TerminatedCString s_Corrupt_data_detected_re_0058d3ce
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d3f1
;   TerminatedCString s_Out_of_memory_reading_PB_0058d409
;   WatcomTypeInfo g_CPackedBitmapTypeInfo_005a1340
;   undefined4 DAT_005be180
;   undefined4 DAT_005be180+1
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_004f3e90
;   cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_004f3f00
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80
;   core_main.c_FUN_004c8440
;   crt_memory.c___vec_new_FUN_00566234
;   crt_stdio.c_fread_FUN_005636d0
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4f90
        ;   Label: cockpit_pkbitmap.cpp_FUN_004f4f90
    PUSH ESI                            ; 004f4f91
    PUSH EDI                            ; 004f4f92
    PUSH EBP                            ; 004f4f93
    SUB ESP,0x34                        ; 004f4f94
    MOV EBP,dword ptr [ESP + 0x4c]      ; 004f4f97
    MOV EBX,0x4                         ; 004f4f9b
    PUSH EBP                            ; 004f4fa0
        ;   Label: LAB_004f4fa0
    PUSH 0x1                            ; 004f4fa1
    PUSH 0x8                            ; 004f4fa3
    LEA EAX,[ESP + 0x30]                ; 004f4fa5
    PUSH EAX                            ; 004f4fa9
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f4faa
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f4faf
    CMP EAX,0x1                         ; 004f4fb2
    JNZ 0x004f5018                      ; 004f4fb5
        ;   XREF to: 004f5018 (CONDITIONAL_JUMP)  ; LAB_004f5018
    MOV EDI,0x5be180                    ; 004f4fb7 | DAT_005be180
    LEA ESI,[ESP + 0x24]                ; 004f4fbc
    MOV ECX,EBX                         ; 004f4fc0
    XOR EAX,EAX                         ; 004f4fc2
    CMPSB.REPE ES:EDI,ESI               ; 004f4fc4 | DAT_005be180 | DAT_005be180+1
    JZ 0x004f4fcd                       ; 004f4fc6
        ;   XREF to: 004f4fcd (CONDITIONAL_JUMP)  ; LAB_004f4fcd
    SBB EAX,EAX                         ; 004f4fc8
    SBB EAX,-0x1                        ; 004f4fca
    TEST EAX,EAX                        ; 004f4fcd
        ;   Label: LAB_004f4fcd
    JZ 0x004f503d                       ; 004f4fcf
        ;   XREF to: 004f503d (CONDITIONAL_JUMP)  ; LAB_004f503d
    MOV EAX,0x58d3b6                    ; 004f4fd1 | = "..\\cockpit\\pkbitmap.cpp"
        ;   Label: LAB_004f4fd1
    MOV EDX,0x557                       ; 004f4fd6
    PUSH 0x58d3ce                       ; 004f4fdb | = "Corrupt data detected reading PBG."
    MOV [0x01cc4800],EAX                ; 004f4fe0 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004f4fe5 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f4feb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f4ff0
    MOV ECX,0x58d3f1                    ; 004f4ff3 | = "..\\cockpit\\pkbitmap.cpp"
        ;   Label: LAB_004f4ff3
    MOV ESI,0x558                       ; 004f4ff8
    PUSH 0x58d409                       ; 004f4ffd | = "Out of memory reading PBG"
    MOV dword ptr [0x01cc4800],ECX      ; 004f5002 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004f5008 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f500e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f5013
    JMP 0x004f4fa0                      ; 004f5016
        ;   XREF to: 004f4fa0 (UNCONDITIONAL_JUMP)  ; LAB_004f4fa0
    MOV ESI,0x58d370                    ; 004f5018 | = "..\\cockpit\\pkbitmap.cpp"
        ;   Label: LAB_004f5018
    MOV EDI,0x556                       ; 004f501d
    PUSH 0x58d388                       ; 004f5022 | = "IO error reading PBG (possibly corrup..."
    MOV dword ptr [0x01cc4800],ESI      ; 004f5027 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004f502d | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f5033
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f5038
    JMP 0x004f4fd1                      ; 004f503b
        ;   XREF to: 004f4fd1 (UNCONDITIONAL_JUMP)  ; LAB_004f4fd1
    CMP dword ptr [ESP + 0x28],0x1      ; 004f503d
        ;   Label: LAB_004f503d
    JC 0x004f4fd1                       ; 004f5042
        ;   XREF to: 004f4fd1 (CONDITIONAL_JUMP)  ; LAB_004f4fd1
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f5044
    MOV ECX,dword ptr [ESP + 0x50]      ; 004f5048
    XOR EDX,EDX                         ; 004f504c
    DIV ECX                             ; 004f504e
    PUSH 0x5a1340                       ; 004f5050 | g_CPackedBitmapTypeInfo_005a1340
    MOV ESI,EAX                         ; 004f5055
    PUSH EAX                            ; 004f5057
    IMUL EAX,EAX,0x24                   ; 004f5058
    ADD EAX,0x4                         ; 004f505b
    PUSH EAX                            ; 004f505e
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 004f505f
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    ADD ESP,0x4                         ; 004f5064
    PUSH EAX                            ; 004f5067
    CALL crt_memory.c___vec_new_FUN_00566234 ; 004f5068
        ;   XREF to: 00566234 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_new_FUN_00566234(void * array_memory, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f506d
    MOV dword ptr [ESP + 0x2c],EAX      ; 004f5070
    TEST EAX,EAX                        ; 004f5074
    JZ 0x004f4ff3                       ; 004f5076
        ;   XREF to: 004f4ff3 (CONDITIONAL_JUMP)  ; LAB_004f4ff3
    XOR EDI,EDI                         ; 004f507c
    TEST ESI,ESI                        ; 004f507e
    JLE 0x004f50fa                      ; 004f5080
        ;   XREF to: 004f50fa (CONDITIONAL_JUMP)  ; LAB_004f50fa
    MOV dword ptr [ESP + 0x30],EAX      ; 004f5086
    MOV EDX,dword ptr [ESP + 0x58]      ; 004f508a
        ;   Label: LAB_004f508a
    MOV EAX,dword ptr [ESP + 0x54]      ; 004f508e
    TEST EDX,EDX                        ; 004f5092
    JL 0x004f509f                       ; 004f5094
        ;   XREF to: 004f509f (CONDITIONAL_JUMP)  ; LAB_004f509f
    CMP EDI,EDX                         ; 004f5096
    JZ 0x004f509f                       ; 004f5098
        ;   XREF to: 004f509f (CONDITIONAL_JUMP)  ; LAB_004f509f
    MOV EAX,0x1                         ; 004f509a
    PUSH EAX                            ; 004f509f
        ;   Label: LAB_004f509f
    PUSH EBP                            ; 004f50a0
    MOV EBX,dword ptr [ESP + 0x38]      ; 004f50a1
    PUSH EBX                            ; 004f50a5
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80 ; 004f50a6
        ;   XREF to: 004f4c80 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(CPackedBitmap * this_ptr, _FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 004f50ab
    MOV EBX,0x1                         ; 004f50ae
    CMP EBX,dword ptr [ESP + 0x50]      ; 004f50b3
    JGE 0x004f50ea                      ; 004f50b7
        ;   XREF to: 004f50ea (CONDITIONAL_JUMP)  ; LAB_004f50ea
    MOV EAX,ESP                         ; 004f50b9
        ;   Label: LAB_004f50b9
    PUSH EAX                            ; 004f50bb
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_004f3e90 ; 004f50bc
        ;   XREF to: 004f3e90 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_004f3e90(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 004f50c1
    PUSH 0x1                            ; 004f50c4
    PUSH EBP                            ; 004f50c6
    LEA EAX,[ESP + 0x8]                 ; 004f50c7
    PUSH EAX                            ; 004f50cb
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80 ; 004f50cc
        ;   XREF to: 004f4c80 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(CPackedBitmap * this_ptr, _FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 004f50d1
    PUSH 0x0                            ; 004f50d4
    LEA EAX,[ESP + 0x4]                 ; 004f50d6
    PUSH EAX                            ; 004f50da
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_004f3f00 ; 004f50db
        ;   XREF to: 004f3f00 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_004f3f00(CPackedBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f50e0
    INC EBX                             ; 004f50e3
    CMP EBX,dword ptr [ESP + 0x50]      ; 004f50e4
    JL 0x004f50b9                       ; 004f50e8
        ;   XREF to: 004f50b9 (CONDITIONAL_JUMP)  ; LAB_004f50b9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f50ea
        ;   Label: LAB_004f50ea
    ADD EAX,0x24                        ; 004f50ee
    INC EDI                             ; 004f50f1
    MOV dword ptr [ESP + 0x30],EAX      ; 004f50f2
    CMP EDI,ESI                         ; 004f50f6
    JL 0x004f508a                       ; 004f50f8
        ;   XREF to: 004f508a (CONDITIONAL_JUMP)  ; LAB_004f508a
    MOV EAX,dword ptr [ESP + 0x48]      ; 004f50fa
        ;   Label: LAB_004f50fa
    MOV dword ptr [EAX],ESI             ; 004f50fe
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004f5100
    ADD ESP,0x34                        ; 004f5104
    POP EBP                             ; 004f5107
    POP EDI                             ; 004f5108
    POP ESI                             ; 004f5109
    POP EBX                             ; 004f510a
    RET                                 ; 004f510b

