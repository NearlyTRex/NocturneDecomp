; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_lockTexture_FUN_00560160(int texture_id)
;
; Parameters:
; int              Stack[0x4]:4   texture_id
;
; Referenced Globals:
;   void* g_PTR_0264bc54
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bc54],0x0      ; 00560160 | g_PTR_0264bc54
        ;   Label: engine_special.cpp_lockTexture_FUN_00560160
    JNZ 0x0056016c                      ; 00560167
        ;   XREF to: 0056016c (CONDITIONAL_JUMP)  ; LAB_0056016c
    XOR EAX,EAX                         ; 00560169
    RET                                 ; 0056016b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056016c
        ;   Label: LAB_0056016c
    PUSH ECX                            ; 00560170
    CALL dword ptr [0x0264bc54]         ; 00560171 | g_PTR_0264bc54
    ADD ESP,0x4                         ; 00560177
    RET                                 ; 0056017a

