; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl unkaddr_004a1200_cpp_SPageResource_dtor_FUN_004a1e90(SPageResource *this_ptr)
;
; Parameters:
; SPageResource *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a2200 at 004a2230
;   core_fldnotes.cpp_SPageResourceText_dtor_FUN_004a2000 at 004a2016
;   core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004a2470 at 004a24af
;   unkafter_fldnotes.cpp_SPageResourceMap_dtor_FUN_004a66a0 at 004a66af
;
; Referenced Globals:
;   void* g_SPageResourceVTable = 004a1e90
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1e90
        ;   Label: unkaddr_004a1200.cpp_SPageResource_dtor_FUN_004a1e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a1e91
    MOV EDX,dword ptr [EBX + 0x10]      ; 004a1e95
    MOV dword ptr [EBX + 0x14],0x5f6ec4 ; 004a1e98 | g_SPageResourceVTable
    TEST EDX,EDX                        ; 004a1e9f
    JNZ 0x004a1ea7                      ; 004a1ea1
        ;   XREF to: 004a1ea7 (CONDITIONAL_JUMP)  ; LAB_004a1ea7
    MOV EAX,EBX                         ; 004a1ea3
    POP EBX                             ; 004a1ea5
    RET                                 ; 004a1ea6
    PUSH EDX                            ; 004a1ea7
        ;   Label: LAB_004a1ea7
    CALL crt_unknown.c_FUN_005b86a0     ; 004a1ea8
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 004a1ead
    MOV dword ptr [EBX + 0x10],0x0      ; 004a1eb0
    MOV EAX,EBX                         ; 004a1eb7
    POP EBX                             ; 004a1eb9
    RET                                 ; 004a1eba

