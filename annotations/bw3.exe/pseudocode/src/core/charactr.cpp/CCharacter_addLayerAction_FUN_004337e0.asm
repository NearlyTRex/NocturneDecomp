; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   from_bone_index
; int              Stack[0xc]:4   to_bone_index
; char *           Stack[0x10]:4   motion_name
; int              Stack[0x14]:4   direction
;
; XREF[1]:
;   core_stranger.cpp_CPrye_ctor_FUN_00517f80 at 00518183
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004337e0
        ;   Label: core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0
    PUSH ESI                            ; 004337e1
    PUSH EDI                            ; 004337e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004337e3
    CMP dword ptr [EBX + 0x27c4],0x21   ; 004337e7
    JGE 0x0043384e                      ; 004337ee
        ;   XREF to: 0043384e (CONDITIONAL_JUMP)  ; LAB_0043384e
    MOV EAX,dword ptr [EBX + 0x27c4]    ; 004337f0
        ;   Label: LAB_004337f0
    SHL EAX,0x3                         ; 004337f6
    MOV EDI,dword ptr [EBX + 0x27c4]    ; 004337f9
    MOV EDX,EAX                         ; 004337ff
    SHL EAX,0x3                         ; 00433801
    INC EDI                             ; 00433804
    SUB EAX,EDX                         ; 00433805
    LEA EDX,[EBX + 0x27c8]              ; 00433807
    MOV dword ptr [EBX + 0x27c4],EDI    ; 0043380d
    ADD EDX,EAX                         ; 00433813
    MOV EAX,dword ptr [ESP + 0x14]      ; 00433815
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00433819
    MOV dword ptr [EDX],EAX             ; 0043381d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043381f
    LEA EDI,[EDX + 0x8]                 ; 00433823
    MOV dword ptr [EDX + 0x4],EAX       ; 00433826
    PUSH EDI                            ; 00433829
    MOV AL,byte ptr [ESI]               ; 0043382a
        ;   Label: LAB_0043382a
    MOV byte ptr [EDI],AL               ; 0043382c
    CMP AL,0x0                          ; 0043382e
    JZ 0x00433842                       ; 00433830
        ;   XREF to: 00433842 (CONDITIONAL_JUMP)  ; LAB_00433842
    MOV AL,byte ptr [ESI + 0x1]         ; 00433832
    ADD ESI,0x2                         ; 00433835
    MOV byte ptr [EDI + 0x1],AL         ; 00433838
    ADD EDI,0x2                         ; 0043383b
    CMP AL,0x0                          ; 0043383e
    JNZ 0x0043382a                      ; 00433840
        ;   XREF to: 0043382a (CONDITIONAL_JUMP)  ; LAB_0043382a
    POP EDI                             ; 00433842
        ;   Label: LAB_00433842
    MOV EAX,dword ptr [ESP + 0x20]      ; 00433843
    MOV dword ptr [EDX + 0x28],EAX      ; 00433847
    POP EDI                             ; 0043384a
    POP ESI                             ; 0043384b
    POP EBX                             ; 0043384c
    RET                                 ; 0043384d
    MOV ECX,0x5b879d                    ; 0043384e
        ;   Label: LAB_0043384e
    MOV ESI,0x12bf                      ; 00433853
    PUSH 0x5b87b2                       ; 00433858
    MOV dword ptr [0x01d71de0],ECX      ; 0043385d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00433863 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00433869
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0043386e
    JMP 0x004337f0                      ; 00433871
        ;   XREF to: 004337f0 (UNCONDITIONAL_JUMP)  ; LAB_004337f0

