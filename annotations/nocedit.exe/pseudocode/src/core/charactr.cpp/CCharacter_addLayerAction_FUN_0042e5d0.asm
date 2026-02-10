; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0 (CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name, int direction)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   from_bone_index
; int              Stack[0xc]:4   to_bone_index
; char *           Stack[0x10]:4   motion_name
; int              Stack[0x14]:4   direction
;
; XREF[2]:
;   core_scat.cpp_CScat_ctor_FUN_00556ed0 at 00556f83
;   core_stranger.cpp_CStranger_ctor_FUN_005bb120 at 005bb343
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_0061752d
;   TerminatedCString s_CCharacter_addLayerActio_00617542
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e5d0
        ;   Label: core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
    PUSH ESI                            ; 0042e5d1
    PUSH EDI                            ; 0042e5d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0042e5d3
    CMP dword ptr [EBX + 0x2628],0x14   ; 0042e5d7
    JGE 0x0042e63e                      ; 0042e5de
        ;   XREF to: 0042e63e (CONDITIONAL_JUMP)  ; LAB_0042e63e
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0042e5e0
        ;   Label: LAB_0042e5e0
    SHL EAX,0x3                         ; 0042e5e6
    MOV EDI,dword ptr [EBX + 0x2628]    ; 0042e5e9
    MOV EDX,EAX                         ; 0042e5ef
    SHL EAX,0x3                         ; 0042e5f1
    INC EDI                             ; 0042e5f4
    SUB EAX,EDX                         ; 0042e5f5
    LEA EDX,[EBX + 0x262c]              ; 0042e5f7
    MOV dword ptr [EBX + 0x2628],EDI    ; 0042e5fd
    ADD EDX,EAX                         ; 0042e603
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042e605
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0042e609
    MOV dword ptr [EDX],EAX             ; 0042e60d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042e60f
    LEA EDI,[EDX + 0x8]                 ; 0042e613
    MOV dword ptr [EDX + 0x4],EAX       ; 0042e616
    PUSH EDI                            ; 0042e619
    MOV AL,byte ptr [ESI]               ; 0042e61a
        ;   Label: LAB_0042e61a
    MOV byte ptr [EDI],AL               ; 0042e61c
    CMP AL,0x0                          ; 0042e61e
    JZ 0x0042e632                       ; 0042e620
        ;   XREF to: 0042e632 (CONDITIONAL_JUMP)  ; LAB_0042e632
    MOV AL,byte ptr [ESI + 0x1]         ; 0042e622
    ADD ESI,0x2                         ; 0042e625
    MOV byte ptr [EDI + 0x1],AL         ; 0042e628
    ADD EDI,0x2                         ; 0042e62b
    CMP AL,0x0                          ; 0042e62e
    JNZ 0x0042e61a                      ; 0042e630
        ;   XREF to: 0042e61a (CONDITIONAL_JUMP)  ; LAB_0042e61a
    POP EDI                             ; 0042e632
        ;   Label: LAB_0042e632
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042e633
    MOV dword ptr [EDX + 0x28],EAX      ; 0042e637
    POP EDI                             ; 0042e63a
    POP ESI                             ; 0042e63b
    POP EBX                             ; 0042e63c
    RET                                 ; 0042e63d
    MOV ECX,0x61752d                    ; 0042e63e | = "..\\core\\charactr.cpp"
        ;   Label: LAB_0042e63e
    MOV ESI,0xf42                       ; 0042e643
    PUSH 0x617542                       ; 0042e648 | = "CCharacter::addLayerAction - too many"
    MOV dword ptr [0x02f0ca48],ECX      ; 0042e64d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0042e653 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0042e659
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0042e65e
    JMP 0x0042e5e0                      ; 0042e661
        ;   XREF to: 0042e5e0 (UNCONDITIONAL_JUMP)  ; LAB_0042e5e0

