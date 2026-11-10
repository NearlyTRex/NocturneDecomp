; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdCheck * __cdecl unkafter_minecar_cpp_FUN_004f2ba0(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047e2b0 at 0047e650
;   shape_edittool.cpp_FUN_0047e870 at 0047e919
;
; Referenced Globals:
;   undefined4 DAT_01d0986c
;   undefined4 DAT_01d09870
;   undefined4 DAT_01d09874
;   undefined4 DAT_01d09878
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f2ba0
        ;   Label: unkafter_minecar.cpp_FUN_004f2ba0
    MOV EDX,dword ptr [0x01d0986c]      ; 004f2ba4 | DAT_01d0986c
    MOV dword ptr [EAX],EDX             ; 004f2baa
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f2bac
    MOV EDX,dword ptr [0x01d09870]      ; 004f2bb0 | DAT_01d09870
    MOV dword ptr [EAX],EDX             ; 004f2bb6
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f2bb8
    MOV EDX,dword ptr [0x01d09874]      ; 004f2bbc | DAT_01d09874
    MOV dword ptr [EAX],EDX             ; 004f2bc2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f2bc4
    MOV EDX,dword ptr [0x01d09878]      ; 004f2bc8 | DAT_01d09878
    MOV dword ptr [EAX],EDX             ; 004f2bce
    RET                                 ; 004f2bd0

