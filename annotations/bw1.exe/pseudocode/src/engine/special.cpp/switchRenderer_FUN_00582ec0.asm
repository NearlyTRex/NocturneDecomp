; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_switchRenderer_FUN_00582ec0(char *new_dll_name,int card_index)
;
; Parameters:
; char *           Stack[0x4]:4   new_dll_name
; int              Stack[0x8]:4   card_index
;
; Referenced Globals:
;   int g_INT_02c83374
;   HWND g_StoredWindowHandle
;
; Called Functions:
;   engine_special.cpp_kill_FUN_00581f20
;   engine_special.cpp_loadExternalRenderer_FUN_00581310
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00582ec0
        ;   Label: engine_special.cpp_switchRenderer_FUN_00582ec0
    PUSH EDI                            ; 00582ec1
    CALL engine_special.cpp_kill_FUN_00581f20 ; 00582ec2
        ;   XREF to: 00581f20 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_kill_FUN_00581f20()
    MOV EAX,dword ptr [ESP + 0x10]      ; 00582ec7
    MOV ESI,dword ptr [ESP + 0xc]       ; 00582ecb
    MOV EDI,0x6257d0                    ; 00582ecf
    MOV [0x02c83374],EAX                ; 00582ed4 | g_INT_02c83374
    PUSH EDI                            ; 00582ed9
    MOV AL,byte ptr [ESI]               ; 00582eda
        ;   Label: LAB_00582eda
    MOV byte ptr [EDI],AL               ; 00582edc
    CMP AL,0x0                          ; 00582ede
    JZ 0x00582ef2                       ; 00582ee0
        ;   XREF to: 00582ef2 (CONDITIONAL_JUMP)  ; LAB_00582ef2
    MOV AL,byte ptr [ESI + 0x1]         ; 00582ee2
    ADD ESI,0x2                         ; 00582ee5
    MOV byte ptr [EDI + 0x1],AL         ; 00582ee8
    ADD EDI,0x2                         ; 00582eeb
    CMP AL,0x0                          ; 00582eee
    JNZ 0x00582eda                      ; 00582ef0
        ;   XREF to: 00582eda (CONDITIONAL_JUMP)  ; LAB_00582eda
    POP EDI                             ; 00582ef2
        ;   Label: LAB_00582ef2
    MOV EDX,dword ptr [0x02c834c0]      ; 00582ef3 | g_StoredWindowHandle
    PUSH EDX                            ; 00582ef9
    CALL engine_special.cpp_loadExternalRenderer_FUN_00581310 ; 00582efa
        ;   XREF to: 00581310 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_loadExternalRenderer_FUN_00581310(HWND window_handle)
    ADD ESP,0x4                         ; 00582eff
    POP EDI                             ; 00582f02
    POP ESI                             ; 00582f03
    RET                                 ; 00582f04

