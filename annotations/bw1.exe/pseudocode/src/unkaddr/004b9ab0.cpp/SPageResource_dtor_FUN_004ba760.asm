; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl unkaddr_004b9ab0_cpp_SPageResource_dtor_FUN_004ba760(SPageResource *this_ptr)
;
; Parameters:
; SPageResource *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004baad0 at 004bab00
;   core_fldnotes.cpp_SPageResourceText_dtor_FUN_004ba8d0 at 004ba8e6
;   core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004bad40 at 004bad7f
;   unkafter_fldnotes.cpp_SPageResourceMap_dtor_FUN_004bf670 at 004bf67f
;
; Referenced Globals:
;   void* g_SPageResourceVTable = 004ba760
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba760
        ;   Label: unkaddr_004b9ab0.cpp_SPageResource_dtor_FUN_004ba760
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ba761
    MOV EDX,dword ptr [EBX + 0x10]      ; 004ba765
    MOV dword ptr [EBX + 0x14],0x600924 ; 004ba768 | g_SPageResourceVTable
    TEST EDX,EDX                        ; 004ba76f
    JNZ 0x004ba777                      ; 004ba771
        ;   XREF to: 004ba777 (CONDITIONAL_JUMP)  ; LAB_004ba777
    MOV EAX,EBX                         ; 004ba773
    POP EBX                             ; 004ba775
    RET                                 ; 004ba776
    PUSH EDX                            ; 004ba777
        ;   Label: LAB_004ba777
    CALL crt_unknown.c_FUN_005c09f0     ; 004ba778
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 004ba77d
    MOV dword ptr [EBX + 0x10],0x0      ; 004ba780
    MOV EAX,EBX                         ; 004ba787
    POP EBX                             ; 004ba789
    RET                                 ; 004ba78a

