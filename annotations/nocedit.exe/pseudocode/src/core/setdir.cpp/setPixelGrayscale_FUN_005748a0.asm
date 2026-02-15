; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_005748a0(int x,int y,int grayscale_value)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   grayscale_value
;
; Referenced Globals:
;   void*[1200] g_ScreenBufferArray
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005748a0
        ;   Label: core_setdir.cpp_setPixelGrayscale_FUN_005748a0
    MOV EBX,dword ptr [ESP + 0x10]      ; 005748a1
    MOV EDX,dword ptr [ESP + 0x8]       ; 005748a5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005748a9
    SHL EDX,0x2                         ; 005748ad
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf6a9c] ; 005748b0 | g_ScreenBufferArray
    LEA ECX,[EAX + EDX*0x1]             ; 005748b7
    MOV EAX,EBX                         ; 005748ba
    SHL EAX,0x8                         ; 005748bc
    LEA EDX,[EBX + EAX*0x1]             ; 005748bf
    MOV EAX,EBX                         ; 005748c2
    SHL EAX,0x10                        ; 005748c4
    ADD EDX,EAX                         ; 005748c7
    MOV dword ptr [ECX],EDX             ; 005748c9
    POP EBX                             ; 005748cb
    RET                                 ; 005748cc

