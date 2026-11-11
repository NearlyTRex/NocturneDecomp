; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_SNotesMap_load_FUN_004a38e0(SNotesMap *this_ptr)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0 at 004a42f8
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005d5dcd
;   TerminatedCString s_Out_of_memory_005d5de2
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_realloc_FUN_005b8ce0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;   engine_alphabit.cpp_FUN_0040d460
;   engine_alphabit.cpp_FUN_0040dd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a38e0
        ;   Label: core_fldnotes.cpp_SNotesMap_load_FUN_004a38e0
    PUSH ESI                            ; 004a38e1
    PUSH EDI                            ; 004a38e2
    PUSH EBP                            ; 004a38e3
    SUB ESP,0x14                        ; 004a38e4
    MOV EBX,dword ptr [ESP + 0x28]      ; 004a38e7
    MOV EDX,dword ptr [EBX + 0x6c]      ; 004a38eb
    PUSH EDX                            ; 004a38ee
    MOV ECX,dword ptr [EBX + 0x68]      ; 004a38ef
    PUSH ECX                            ; 004a38f2
    LEA EAX,[EBX + 0x4]                 ; 004a38f3
    PUSH EAX                            ; 004a38f6
    LEA EAX,[EBX + 0x70]                ; 004a38f7
    PUSH EAX                            ; 004a38fa
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a38fb
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    MOV EAX,dword ptr [EBX + 0x7c]      ; 004a3900
    IMUL EAX,dword ptr [EBX + 0x80]     ; 004a3903
    ADD ESP,0x10                        ; 004a390a
    PUSH EAX                            ; 004a390d
    MOV EDI,dword ptr [EBX + 0x84]      ; 004a390e
    PUSH EDI                            ; 004a3914
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 004a3915
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 004a391a
    MOV dword ptr [EBX + 0x84],EAX      ; 004a391d
    TEST EAX,EAX                        ; 004a3923
    JZ 0x004a3a38                       ; 004a3925
        ;   XREF to: 004a3a38 (CONDITIONAL_JUMP)  ; LAB_004a3a38
    MOV EAX,dword ptr [EBX + 0x7c]      ; 004a392b
        ;   Label: LAB_004a392b
    MOV ECX,dword ptr [EBX + 0x80]      ; 004a392e
    IMUL ECX,EAX                        ; 004a3934
    MOV ESI,dword ptr [EBX + 0x74]      ; 004a3937
    MOV EDI,dword ptr [EBX + 0x84]      ; 004a393a
    PUSH EDI                            ; 004a3940
    MOV EAX,ECX                         ; 004a3941
    SHR ECX,0x2                         ; 004a3943
    MOVSD.REP ES:EDI,ESI                ; 004a3946
    MOV CL,AL                           ; 004a3948
    AND CL,0x3                          ; 004a394a
    MOVSB.REP ES:EDI,ESI                ; 004a394d
    POP EDI                             ; 004a394f
    MOV EAX,dword ptr [EBX + 0x68]      ; 004a3950
    MOV EDX,EAX                         ; 004a3953
    SAR EDX,0x1f                        ; 004a3955
    SUB EAX,EDX                         ; 004a3958
    SAR EAX,0x1                         ; 004a395a
    MOV ECX,EAX                         ; 004a395c
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004a395e
    MOV EDX,EAX                         ; 004a3961
    SAR EDX,0x1f                        ; 004a3963
    SUB EAX,EDX                         ; 004a3966
    SAR EAX,0x1                         ; 004a3968
    CMP ECX,0x1                         ; 004a396a
    JGE 0x004a3974                      ; 004a396d
        ;   XREF to: 004a3974 (CONDITIONAL_JUMP)  ; LAB_004a3974
    MOV ECX,0x1                         ; 004a396f
    CMP EAX,0x1                         ; 004a3974
        ;   Label: LAB_004a3974
    JGE 0x004a397e                      ; 004a3977
        ;   XREF to: 004a397e (CONDITIONAL_JUMP)  ; LAB_004a397e
    MOV EAX,0x1                         ; 004a3979
    PUSH EAX                            ; 004a397e
        ;   Label: LAB_004a397e
    PUSH ECX                            ; 004a397f
    LEA ESI,[EBX + 0x88]                ; 004a3980
    PUSH ESI                            ; 004a3986
    CALL engine_alphabit.cpp_FUN_0040d460 ; 004a3987
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d460()
    ADD ESP,0xc                         ; 004a398c
    PUSH 0x0                            ; 004a398f
    PUSH ESI                            ; 004a3991
    CALL engine_alphabit.cpp_FUN_0040dd20 ; 004a3992
        ;   XREF to: 0040dd20 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040dd20()
    ADD ESP,0x8                         ; 004a3997
    MOV ESI,dword ptr [EBX + 0x9c]      ; 004a399a
    XOR ECX,ECX                         ; 004a39a0
    TEST ESI,ESI                        ; 004a39a2
    JLE 0x004a3a30                      ; 004a39a4
        ;   XREF to: 004a3a30 (CONDITIONAL_JUMP)  ; LAB_004a3a30
    LEA EDX,[EBX + 0xa0]                ; 004a39aa
    MOV ESI,dword ptr [EDX + 0x64]      ; 004a39b0
        ;   Label: LAB_004a39b0
    MOV EDI,dword ptr [EDX + 0x6c]      ; 004a39b3
    MOV EAX,dword ptr [EDX + 0x68]      ; 004a39b6
    MOV EBP,dword ptr [EDX + 0x70]      ; 004a39b9
    SUB ESI,EDI                         ; 004a39bc
    SUB EAX,EBP                         ; 004a39be
    IMUL ESI,EAX                        ; 004a39c0
    FLD float ptr [EDX + 0x74]          ; 004a39c3
    FSUB float ptr [EDX + 0x7c]         ; 004a39c6
    FLD float ptr [EDX + 0x78]          ; 004a39c9
    FSUB float ptr [EDX + 0x80]         ; 004a39cc
    FMULP                               ; 004a39d2
    FABS                                ; 004a39d4
    MOV dword ptr [ESP + 0x10],ESI      ; 004a39d6
    FILD dword ptr [ESP + 0x10]         ; 004a39da
    FABS                                ; 004a39de
    FDIVRP                              ; 004a39e0
    MOV ESI,dword ptr [EBX + 0x98]      ; 004a39e2
    MOV EAX,dword ptr [EBX + 0x94]      ; 004a39e8
    IMUL EAX,ESI                        ; 004a39ee
    MOV EDI,dword ptr [EBX + 0x6c]      ; 004a39f1
    MOV dword ptr [ESP + 0x10],EAX      ; 004a39f4
    MOV EAX,dword ptr [EBX + 0x68]      ; 004a39f8
    IMUL EAX,EDI                        ; 004a39fb
    FILD dword ptr [ESP + 0x10]         ; 004a39fe
    MOV dword ptr [ESP + 0x10],EAX      ; 004a3a02
    FMULP                               ; 004a3a06
    FILD dword ptr [ESP + 0x10]         ; 004a3a08
    FDIVP                               ; 004a3a0c
    FSQRT                               ; 004a3a0e
    INC ECX                             ; 004a3a10
    FSTP float ptr [EDX + 0x84]         ; 004a3a11
    MOV EBP,dword ptr [EBX + 0x9c]      ; 004a3a17
    ADD EDX,0x88                        ; 004a3a1d
    CMP ECX,EBP                         ; 004a3a23
    JL 0x004a39b0                       ; 004a3a25
        ;   XREF to: 004a39b0 (CONDITIONAL_JUMP)  ; LAB_004a39b0
    LEA EAX,[EAX]                       ; 004a3a27
    LEA EDX,[EDX]                       ; 004a3a2d
    ADD ESP,0x14                        ; 004a3a30
        ;   Label: LAB_004a3a30
    POP EBP                             ; 004a3a33
    POP EDI                             ; 004a3a34
    POP ESI                             ; 004a3a35
    POP EBX                             ; 004a3a36
    RET                                 ; 004a3a37
    MOV EAX,0x5d5dcd                    ; 004a3a38 | = "..\\core\\fldnotes.cpp"
        ;   Label: LAB_004a3a38
    MOV EDX,0x71e                       ; 004a3a3d
    PUSH 0x5d5de2                       ; 004a3a42 | = "Out of memory!"
    MOV [0x01d046a0],EAX                ; 004a3a47 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004a3a4c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a3a52
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a3a57
    JMP 0x004a392b                      ; 004a3a5a
        ;   XREF to: 004a392b (UNCONDITIONAL_JUMP)  ; LAB_004a392b

