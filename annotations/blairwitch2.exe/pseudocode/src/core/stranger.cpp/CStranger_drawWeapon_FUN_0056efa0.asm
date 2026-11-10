; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_0056efa0(CStranger *this_ptr,int drawn)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; Referenced Globals:
;   undefined4 s_flashlit_wav_005ebf64+1
;   CGame* g_CGamePtr = 01cb6900
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field516_0x264
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056efa0
        ;   Label: core_stranger.cpp_CStranger_drawWeapon_FUN_0056efa0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056efa4
    MOV dword ptr [EDX + 0x25640],EAX   ; 0056efa8
    TEST EAX,EAX                        ; 0056efae
    JNZ 0x0056efc0                      ; 0056efb0
        ;   XREF to: 0056efc0 (CONDITIONAL_JUMP)  ; LAB_0056efc0
    MOV EAX,[0x00616494]                ; 0056efb2 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x264],0x0     ; 0056efb7 | g_CGameInstance.field516_0x264
    JNZ 0x0056efc1                      ; 0056efbe
        ;   XREF to: 0056efc1 (CONDITIONAL_JUMP)  ; LAB_0056efc1
    RET                                 ; 0056efc0
        ;   Label: LAB_0056efc0
    PUSH 0x5ebf65                       ; 0056efc1 | s_flashlit_wav_005ebf64+1
        ;   Label: LAB_0056efc1
    MOV dword ptr [EAX + 0x264],0x0     ; 0056efc6 | g_CGameInstance.field516_0x264
    PUSH EDX                            ; 0056efd0
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 0056efd1
    CALL dword ptr [EAX + 0x34]         ; 0056efd7
    ADD ESP,0x8                         ; 0056efda
    RET                                 ; 0056efdd

