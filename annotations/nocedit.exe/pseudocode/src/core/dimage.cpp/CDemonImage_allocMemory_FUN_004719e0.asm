; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0(CDemonImage * this_ptr)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dimage.cpp_CDemonImage_load_FUN_00471ad0 at 00471b47
;
; Referenced Globals:
;   TerminatedCString s_core_dimage_cpp_0061ec5a
;   TerminatedCString s_core_dimage_cpp_0061ec6d
;   TerminatedCString s_CDemonImage_allocMemory__0061ec80
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004719e0
        ;   Label: core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004719e1
    PUSH EBX                            ; 004719e5
    CALL core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40 ; 004719e6
        ;   XREF to: 00471a40 (UNCONDITIONAL_CALL)  ; void core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40(CDemonImage * this_ptr)
    MOV EAX,dword ptr [EBX + 0x304]     ; 004719eb
    IMUL EAX,dword ptr [EBX + 0x308]    ; 004719f1
    ADD ESP,0x4                         ; 004719f8
    PUSH 0x30                           ; 004719fb
    PUSH 0x61ec5a                       ; 004719fd | = "..\\core\\dimage.cpp"
    PUSH EAX                            ; 00471a02
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00471a03
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00471a08
    MOV dword ptr [EBX + 0x300],EAX     ; 00471a0b
    TEST EAX,EAX                        ; 00471a11
    JZ 0x00471a17                       ; 00471a13
        ;   XREF to: 00471a17 (CONDITIONAL_JUMP)  ; LAB_00471a17
    POP EBX                             ; 00471a15
    RET                                 ; 00471a16
    PUSH ESI                            ; 00471a17
        ;   Label: LAB_00471a17
    MOV EBX,0x61ec6d                    ; 00471a18 | = "..\\core\\dimage.cpp"
    MOV ESI,0x31                        ; 00471a1d
    PUSH 0x61ec80                       ; 00471a22 | = "CDemonImage::allocMemory - Out of mem..."
    MOV dword ptr [0x02f0ca48],EBX      ; 00471a27 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00471a2d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00471a33
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00471a38
    POP ESI                             ; 00471a3b
    POP EBX                             ; 00471a3c
    RET                                 ; 00471a3d

