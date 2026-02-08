; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00 (CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles, int direction_hint)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   dest_position
; CVector3f *      Stack[0xc]:4   out_euler_angles
; int              Stack[0x10]:4   direction_hint
;
; XREF[11]:
;   core_bugs.cpp_CBugs_FUN_00425cc0 at 00425e27
;   core_bugs.cpp_CBugs_FUN_00425fe0 at 004262a8
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 at 00428868
;   core_colonel.cpp_CColonel_FUN_0043ff20 at 00440359
;   core_gabriela.cpp_CGabriella_FUN_004d4190 at 004d46f7
;   core_haystack.cpp_CHaystack_FUN_004f13f0 at 004f1879
;   core_icepick.cpp_CIcePick_FUN_004f8c70 at 004f922b
;   core_moloch.cpp_CMoloch_FUN_005293b0 at 005294c1
;   core_scat.cpp_CScat_FUN_005578e0 at 00557ad1
;   core_svetlana.cpp_CSvetlana_FUN_005d9260 at 005d981b
;   ... and 1 more
;
; Referenced Globals:
;   int g_PathfindingMaxClimbHeight
;
; Called Functions:
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547d00
        ;   Label: core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
    PUSH ESI                            ; 00547d01
    PUSH EDI                            ; 00547d02
    PUSH EBP                            ; 00547d03
    MOV EBX,dword ptr [ESP + 0x14]      ; 00547d04
    MOV ESI,dword ptr [ESP + 0x18]      ; 00547d08
    MOV EBP,dword ptr [ESP + 0x20]      ; 00547d0c
    LEA EDI,[EBX + 0x138c0]             ; 00547d10
    FLD float ptr [EDI]                 ; 00547d16
    FCOMP float ptr [ESI]               ; 00547d18
    FNSTSW AX                           ; 00547d1a
    SAHF                                ; 00547d1c
    JZ 0x00547d6a                       ; 00547d1d
        ;   XREF to: 00547d6a (CONDITIONAL_JUMP)  ; LAB_00547d6a
    LEA EAX,[EBX + 0x138c0]             ; 00547d1f
        ;   Label: LAB_00547d1f
    CMP EAX,ESI                         ; 00547d25
    JNZ 0x00547d82                      ; 00547d27
        ;   XREF to: 00547d82 (CONDITIONAL_JUMP)  ; LAB_00547d82
    MOV EDX,0x1                         ; 00547d29
        ;   Label: LAB_00547d29
    LEA EDI,[EBX + 0x138cc]             ; 00547d2e
    MOV dword ptr [0x030c3ab4],EDX      ; 00547d34 | g_PathfindingMaxClimbHeight
    PUSH EBP                            ; 00547d3a
        ;   Label: LAB_00547d3a
    PUSH EDI                            ; 00547d3b
    PUSH ESI                            ; 00547d3c
    PUSH EBX                            ; 00547d3d
    CALL core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 ; 00547d3e
        ;   XREF to: 00547320 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathToDestination_FUN_00547320(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00547d43
    MOV dword ptr [EBX + 0x138bc],EAX   ; 00547d46
    CMP EAX,0x1                         ; 00547d4c
    JNZ 0x00547d94                      ; 00547d4f
        ;   XREF to: 00547d94 (CONDITIONAL_JUMP)  ; LAB_00547d94
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00547d51
        ;   Label: LAB_00547d51
    LEA EAX,[EBX + 0x138cc]             ; 00547d55
    CMP EAX,ECX                         ; 00547d5b
    JNZ 0x00547da6                      ; 00547d5d
        ;   XREF to: 00547da6 (CONDITIONAL_JUMP)  ; LAB_00547da6
    MOV EAX,dword ptr [EBX + 0x138bc]   ; 00547d5f
    POP EBP                             ; 00547d65
    POP EDI                             ; 00547d66
    POP ESI                             ; 00547d67
    POP EBX                             ; 00547d68
    RET                                 ; 00547d69
    FLD float ptr [EDI + 0x4]           ; 00547d6a
        ;   Label: LAB_00547d6a
    FCOMP float ptr [ESI + 0x4]         ; 00547d6d
    FNSTSW AX                           ; 00547d70
    SAHF                                ; 00547d72
    JNZ 0x00547d1f                      ; 00547d73
        ;   XREF to: 00547d1f (CONDITIONAL_JUMP)  ; LAB_00547d1f
    FLD float ptr [EDI + 0x8]           ; 00547d75
    FCOMP float ptr [ESI + 0x8]         ; 00547d78
    FNSTSW AX                           ; 00547d7b
    SAHF                                ; 00547d7d
    JZ 0x00547d51                       ; 00547d7e
        ;   XREF to: 00547d51 (CONDITIONAL_JUMP)  ; LAB_00547d51
    JMP 0x00547d1f                      ; 00547d80
        ;   XREF to: 00547d1f (UNCONDITIONAL_JUMP)  ; LAB_00547d1f
    MOV EDX,dword ptr [ESI]             ; 00547d82
        ;   Label: LAB_00547d82
    MOV dword ptr [EAX],EDX             ; 00547d84
    MOV EDX,dword ptr [ESI + 0x4]       ; 00547d86
    MOV dword ptr [EAX + 0x4],EDX       ; 00547d89
    MOV EDX,dword ptr [ESI + 0x8]       ; 00547d8c
    MOV dword ptr [EAX + 0x8],EDX       ; 00547d8f
    JMP 0x00547d29                      ; 00547d92
        ;   XREF to: 00547d29 (UNCONDITIONAL_JUMP)  ; LAB_00547d29
    MOV EAX,[0x030c3ab4]                ; 00547d94 | g_PathfindingMaxClimbHeight
        ;   Label: LAB_00547d94
    INC EAX                             ; 00547d99
    MOV [0x030c3ab4],EAX                ; 00547d9a | g_PathfindingMaxClimbHeight
    CMP EAX,0x3                         ; 00547d9f
    JLE 0x00547d3a                      ; 00547da2
        ;   XREF to: 00547d3a (CONDITIONAL_JUMP)  ; LAB_00547d3a
    JMP 0x00547d51                      ; 00547da4
        ;   XREF to: 00547d51 (UNCONDITIONAL_JUMP)  ; LAB_00547d51
    MOV EDX,dword ptr [EAX]             ; 00547da6
        ;   Label: LAB_00547da6
    MOV dword ptr [ECX],EDX             ; 00547da8
    MOV EDX,dword ptr [EAX + 0x4]       ; 00547daa
    MOV dword ptr [ECX + 0x4],EDX       ; 00547dad
    MOV EDX,dword ptr [EAX + 0x8]       ; 00547db0
    MOV dword ptr [ECX + 0x8],EDX       ; 00547db3
    MOV EAX,dword ptr [EBX + 0x138bc]   ; 00547db6
    POP EBP                             ; 00547dbc
    POP EDI                             ; 00547dbd
    POP ESI                             ; 00547dbe
    POP EBX                             ; 00547dbf
    RET                                 ; 00547dc0

