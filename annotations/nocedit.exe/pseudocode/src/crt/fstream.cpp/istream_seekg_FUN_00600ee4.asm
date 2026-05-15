; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _istream * __cdecl crt_fstream_cpp_istream_seekg_FUN_00600ee4(void *this_ptr,int offset)
;
; Parameters:
; void *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset
;
; XREF[2]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e1591
;   engine_dosio.cpp_reopenFileStream_FUN_00481b50 at 00481c13
;
; Called Functions:
;   crt_stdio.c_reportStreamError_FUN_00606020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600ee4
        ;   Label: crt_fstream.cpp_istream_seekg_FUN_00600ee4
    MOV EBX,dword ptr [ESP + 0x8]       ; 00600ee5
    PUSH 0x1                            ; 00600ee9
    PUSH EBX                            ; 00600eeb
    CALL 0x00608cd1                     ; 00600eec
        ;   XREF to: 00608cd1 (UNCONDITIONAL_CALL)  ; LAB_00608ccf+2
    ADD ESP,0x8                         ; 00600ef1
    TEST EAX,EAX                        ; 00600ef4
    JNZ 0x00600efc                      ; 00600ef6
        ;   XREF to: 00600efc (CONDITIONAL_JUMP)  ; LAB_00600efc
    MOV EAX,EBX                         ; 00600ef8
        ;   Label: LAB_00600ef8
    POP EBX                             ; 00600efa
    RET                                 ; 00600efb
    PUSH 0x1                            ; 00600efc
        ;   Label: LAB_00600efc
    MOV EAX,dword ptr [EBX]             ; 00600efe
    PUSH 0x0                            ; 00600f00
    MOV ECX,dword ptr [ESP + 0x14]      ; 00600f02
    MOV EAX,dword ptr [EAX + 0x4]       ; 00600f06
    PUSH ECX                            ; 00600f09
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00600f0a
    PUSH EAX                            ; 00600f0e
    MOV EDX,dword ptr [EAX + 0x28]      ; 00600f0f
    CALL dword ptr [EDX + 0x18]         ; 00600f12
    ADD ESP,0x10                        ; 00600f15
    CMP EAX,-0x1                        ; 00600f18
    JNZ 0x00600ef8                      ; 00600f1b
        ;   XREF to: 00600ef8 (CONDITIONAL_JUMP)  ; LAB_00600ef8
    MOV EAX,dword ptr [EBX]             ; 00600f1d
    MOV EAX,dword ptr [EAX + 0x4]       ; 00600f1f
    PUSH 0x2                            ; 00600f22
    ADD EAX,EBX                         ; 00600f24
    PUSH EAX                            ; 00600f26
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 00600f27
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 00600f2c
    MOV EAX,EBX                         ; 00600f2f
    POP EBX                             ; 00600f31
    RET                                 ; 00600f32

