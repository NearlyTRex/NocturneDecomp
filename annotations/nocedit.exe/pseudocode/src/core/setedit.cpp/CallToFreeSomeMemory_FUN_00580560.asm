; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 at 00576db2
;   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 at 0057ae0e
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057eb5a
;
; Referenced Globals:
;   TerminatedCString s_core_setedit_cpp_0064859e
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;   undefined4 DAT_03659384
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580560
        ;   Label: core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560
    PUSH ESI                            ; 00580561
    MOV EDX,0x64859e                    ; 00580562 | = "..\\core\\setedit.cpp"
    MOV ECX,0x1036                      ; 00580567
    MOV EBX,dword ptr [0x03659384]      ; 0058056c | DAT_03659384
    XOR ESI,ESI                         ; 00580572
    PUSH EBX                            ; 00580574
    MOV dword ptr [0x0067d20c],EDX      ; 00580575 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 0058057b | g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 00580581
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00580586
    MOV dword ptr [0x03659384],ESI      ; 00580589 | DAT_03659384
    POP ESI                             ; 0058058f
    POP EBX                             ; 00580590
    RET                                 ; 00580591

