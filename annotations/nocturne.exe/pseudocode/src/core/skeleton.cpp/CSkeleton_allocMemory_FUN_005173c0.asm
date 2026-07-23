; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_005173c0(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_005175f0 at 005176de
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591173
;   TerminatedCString s_Too_bony_00591188
;   TerminatedCString s_core_skeleton_cpp_00591192
;   TerminatedCString s_Out_of_hunk_in_CSkeleton_005911a7
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_005174e0
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005173c0
        ;   Label: core_skeleton.cpp_CSkeleton_allocMemory_FUN_005173c0
    PUSH ESI                            ; 005173c1
    PUSH EDI                            ; 005173c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005173c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005173c7
    PUSH EBX                            ; 005173cb
    CALL FUN_005174e0                   ; 005173cc
        ;   XREF to: 005174e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005174e0()
    ADD ESP,0x4                         ; 005173d1
    CMP ESI,0x64                        ; 005173d4
    JG 0x00517483                       ; 005173d7
        ;   XREF to: 00517483 (CONDITIONAL_JUMP)  ; LAB_00517483
    MOV EAX,dword ptr [ESP + 0x18]      ; 005173dd
        ;   Label: LAB_005173dd
    MOV dword ptr [EBX + 0x28558],ESI   ; 005173e1
    MOV dword ptr [EBX + 0x2936c],EAX   ; 005173e7
    MOV EAX,dword ptr [EBX + 0x28558]   ; 005173ed
    IMUL EAX,dword ptr [EBX + 0x2936c]  ; 005173f3
    SHL EAX,0x4                         ; 005173fa
    PUSH EAX                            ; 005173fd
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 005173fe
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_malloc_FUN_00564c18()
    MOV ESI,dword ptr [EBX + 0x2936c]   ; 00517403
    MOV dword ptr [EBX + 0x29370],EAX   ; 00517409
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051740f
    SUB EAX,ESI                         ; 00517416
    SHL EAX,0x2                         ; 00517418
    ADD ESP,0x4                         ; 0051741b
    ADD EAX,0x4                         ; 0051741e
    PUSH EAX                            ; 00517421
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 00517422
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_malloc_FUN_00564c18()
    ADD ESP,0x4                         ; 00517427
    TEST EAX,EAX                        ; 0051742a
    JZ 0x00517434                       ; 0051742c
        ;   XREF to: 00517434 (CONDITIONAL_JUMP)  ; LAB_00517434
    ADD EAX,0x4                         ; 0051742e
    MOV dword ptr [EAX + -0x4],ESI      ; 00517431
    MOV ESI,dword ptr [EBX + 0x2936c]   ; 00517434
        ;   Label: LAB_00517434
    MOV dword ptr [EBX + 0x29374],EAX   ; 0051743a
    LEA EAX,[ESI*0x4 + 0x0]             ; 00517440
    SUB EAX,ESI                         ; 00517447
    SHL EAX,0x2                         ; 00517449
    ADD EAX,0x4                         ; 0051744c
    PUSH EAX                            ; 0051744f
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 00517450
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_malloc_FUN_00564c18()
    ADD ESP,0x4                         ; 00517455
    TEST EAX,EAX                        ; 00517458
    JZ 0x00517462                       ; 0051745a
        ;   XREF to: 00517462 (CONDITIONAL_JUMP)  ; LAB_00517462
    ADD EAX,0x4                         ; 0051745c
    MOV dword ptr [EAX + -0x4],ESI      ; 0051745f
    MOV EDI,dword ptr [EBX + 0x29370]   ; 00517462
        ;   Label: LAB_00517462
    MOV dword ptr [EBX + 0x29378],EAX   ; 00517468
    TEST EDI,EDI                        ; 0051746e
    JZ 0x005174ab                       ; 00517470
        ;   XREF to: 005174ab (CONDITIONAL_JUMP)  ; LAB_005174ab
    CMP dword ptr [EBX + 0x29374],0x0   ; 00517472
    JZ 0x005174ab                       ; 00517479
        ;   XREF to: 005174ab (CONDITIONAL_JUMP)  ; LAB_005174ab
    TEST EAX,EAX                        ; 0051747b
    JZ 0x005174ab                       ; 0051747d
        ;   XREF to: 005174ab (CONDITIONAL_JUMP)  ; LAB_005174ab
    POP EDI                             ; 0051747f
    POP ESI                             ; 00517480
    POP EBX                             ; 00517481
    RET                                 ; 00517482
    MOV EDX,0x591173                    ; 00517483 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00517483
    MOV ECX,0xc6                        ; 00517488
    PUSH 0x591188                       ; 0051748d | = "Too bony!"
    MOV dword ptr [0x01cc4800],EDX      ; 00517492 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00517498 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0051749e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005174a3
    JMP 0x005173dd                      ; 005174a6
        ;   XREF to: 005173dd (UNCONDITIONAL_JUMP)  ; LAB_005173dd
    MOV ESI,dword ptr [EBX + 0x2936c]   ; 005174ab
        ;   Label: LAB_005174ab
    PUSH ESI                            ; 005174b1
    MOV EDI,dword ptr [EBX + 0x28558]   ; 005174b2
    PUSH EDI                            ; 005174b8
    MOV EDX,0x591192                    ; 005174b9 | = "..\\core\\skeleton.cpp"
    MOV ECX,0xda                        ; 005174be
    PUSH 0x5911a7                       ; 005174c3 | = "Out of hunk in CSkeleton::allocMemory..."
    MOV dword ptr [0x01cc4800],EDX      ; 005174c8 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005174ce | DAT_01cc4804
    CALL FUN_004c8440                   ; 005174d4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 005174d9
    POP EDI                             ; 005174dc
    POP ESI                             ; 005174dd
    POP EBX                             ; 005174de
    RET                                 ; 005174df

