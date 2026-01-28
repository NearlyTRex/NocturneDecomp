; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_004a2cc0(CStrList *this_ptr,int new_capacity)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   new_capacity
;
; XREF[3]:
;   shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0 at 004a2ae5
;   shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80 at 004a2d94
;   shape_edittool.cpp_CStrList_insert_FUN_004a2bc0 at 004a2c08
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623726
;   TerminatedCString s_CStrList_allocate_Can_t__0062373c
;   TerminatedCString s_shape_edittool_cpp_00623764
;   TerminatedCString s_CStrList_allocate_invali_0062377a
;   TerminatedCString s_shape_edittool_cpp_006237a1
;   TerminatedCString s_shape_edittool_cpp_006237b7
;   TerminatedCString s_CStrList_insert_out_of_m_006237cd
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2cc0
        ;   Label: shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
    PUSH ESI                            ; 004a2cc1
    PUSH EDI                            ; 004a2cc2
    PUSH EBP                            ; 004a2cc3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a2cc4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a2cc8
    CMP ESI,dword ptr [EBX]             ; 004a2ccc
    JL 0x004a2d02                       ; 004a2cce
        ;   XREF to: 004a2d02 (CONDITIONAL_JUMP)  ; LAB_004a2d02
    CMP ESI,0x1                         ; 004a2cd0
        ;   Label: LAB_004a2cd0
    JGE 0x004a2cf8                      ; 004a2cd3
        ;   XREF to: 004a2cf8 (CONDITIONAL_JUMP)  ; LAB_004a2cf8
    PUSH ESI                            ; 004a2cd5
    MOV EBP,0x623764                    ; 004a2cd6 | = "..\\shape\\edittool.cpp"
    MOV EAX,0xb4d                       ; 004a2cdb
    PUSH 0x62377a                       ; 004a2ce0 | = "CStrList::allocate - invalid count: %d"
    MOV dword ptr [0x02f0ca48],EBP      ; 004a2ce5 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004a2ceb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a2cf0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004a2cf5
    CMP ESI,dword ptr [EBX + 0x4]       ; 004a2cf8
        ;   Label: LAB_004a2cf8
    JG 0x004a2d27                       ; 004a2cfb
        ;   XREF to: 004a2d27 (CONDITIONAL_JUMP)  ; LAB_004a2d27
    POP EBP                             ; 004a2cfd
        ;   Label: LAB_004a2cfd
    POP EDI                             ; 004a2cfe
    POP ESI                             ; 004a2cff
    POP EBX                             ; 004a2d00
    RET                                 ; 004a2d01
    MOV ECX,0x623726                    ; 004a2d02 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a2d02
    MOV EDI,0xb4c                       ; 004a2d07
    PUSH 0x62373c                       ; 004a2d0c | = "CStrList::allocate - Can't shrink list!"
    MOV dword ptr [0x02f0ca48],ECX      ; 004a2d11 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a2d17 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a2d1d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a2d22
    JMP 0x004a2cd0                      ; 004a2d25
        ;   XREF to: 004a2cd0 (UNCONDITIONAL_JUMP)  ; LAB_004a2cd0
    PUSH 0xb50                          ; 004a2d27
        ;   Label: LAB_004a2d27
    PUSH 0x6237a1                       ; 004a2d2c | = "..\\shape\\edittool.cpp"
    MOV dword ptr [EBX + 0x4],ESI       ; 004a2d31
    LEA EAX,[ESI*0x4 + 0x0]             ; 004a2d34
    PUSH EAX                            ; 004a2d3b
    MOV ECX,dword ptr [EBX + 0x8]       ; 004a2d3c
    PUSH ECX                            ; 004a2d3f
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004a2d40
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004a2d45
    MOV dword ptr [EBX + 0x8],EAX       ; 004a2d48
    TEST EAX,EAX                        ; 004a2d4b
    JNZ 0x004a2cfd                      ; 004a2d4d
        ;   XREF to: 004a2cfd (CONDITIONAL_JUMP)  ; LAB_004a2cfd
    MOV EDI,0x6237b7                    ; 004a2d4f | = "..\\shape\\edittool.cpp"
    MOV EBP,0xb51                       ; 004a2d54
    PUSH 0x6237cd                       ; 004a2d59 | = "CStrList::insert - out of memory"
    MOV dword ptr [0x02f0ca48],EDI      ; 004a2d5e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004a2d64 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a2d6a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a2d6f
    POP EBP                             ; 004a2d72
    POP EDI                             ; 004a2d73
    POP ESI                             ; 004a2d74
    POP EBX                             ; 004a2d75
    RET                                 ; 004a2d76

