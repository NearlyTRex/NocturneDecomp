; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTris_FUN_004950b0(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00579aaa
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004950b0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004950b1
    PUSH EBX                            ; 004950b5
    MOV dword ptr [EBX + 0x4],0x30d40   ; 004950b6
    CALL core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600 ; 004950bd
        ;   XREF to: 00494600 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600(CDemonRaytrace * this_ptr)
    MOV dword ptr [EBX + 0x4],0x0       ; 004950c2
    MOV dword ptr [EBX + 0x10],0x47c34ff3 ; 004950c9
    MOV dword ptr [EBX + 0x14],0x47c34ff3 ; 004950d0
    MOV dword ptr [EBX + 0x18],0x47c34ff3 ; 004950d7
    MOV dword ptr [EBX + 0x1c],0xc7c34ff3 ; 004950de
    MOV dword ptr [EBX + 0x20],0xc7c34ff3 ; 004950e5
    ADD ESP,0x4                         ; 004950ec
    MOV dword ptr [EBX + 0x24],0xc7c34ff3 ; 004950ef
    POP EBX                             ; 004950f6
    RET                                 ; 004950f7

