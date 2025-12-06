; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_font.cpp_CBitFont_free_FUN_004cd4e0(CBitFont * this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_font.cpp_CBitFont_dtor_FUN_004cceb0 at 004cceb6
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280 at 004cd288
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_0062a5bd
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   engine_font.cpp_CBitFont_reset_FUN_004cced0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd4e0
        ;   Label: engine_font.cpp_CBitFont_free_FUN_004cd4e0
    PUSH ESI                            ; 004cd4e1
    PUSH EDI                            ; 004cd4e2
    PUSH EBP                            ; 004cd4e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004cd4e4
    MOV EBX,EDI                         ; 004cd4e8
    LEA ESI,[EDI + 0x10]                ; 004cd4ea
    MOV EDX,0x62a5bd                    ; 004cd4ed | = "..\\engine\\font.cpp" | s_engine_font_cpp_0062a5bd = ..\engine\font.cpp
        ;   Label: LAB_004cd4ed
    MOV ECX,0x173                       ; 004cd4f2
    MOV EBP,dword ptr [EBX + 0x144]     ; 004cd4f7
    ADD EBX,0x4                         ; 004cd4fd
    PUSH EBP                            ; 004cd500
    MOV dword ptr [0x0067d20c],EDX      ; 004cd501 | char * g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 004cd507 | int g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 004cd50d | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cd512
    MOV dword ptr [EBX + 0x140],0x0     ; 004cd515
    CMP EBX,ESI                         ; 004cd51f
    JNZ 0x004cd4ed                      ; 004cd521 | LAB_004cd4ed
        ;   XREF to: 004cd4ed (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004cd523
    CALL engine_font.cpp_CBitFont_reset_FUN_004cced0 ; 004cd524 | void engine_font.cpp_CBitFont_reset_FUN_004cced0(CBitFont * this_ptr)
        ;   XREF to: 004cced0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cd529
    POP EBP                             ; 004cd52c
    POP EDI                             ; 004cd52d
    POP ESI                             ; 004cd52e
    POP EBX                             ; 004cd52f
    RET                                 ; 004cd530

