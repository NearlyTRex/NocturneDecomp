; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_00417690(CBodyPart *this_ptr,CVector3f *position)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 at 004279ea
;
; Referenced Globals:
;   undefined4 s_GCHAR2_RAW_005cbf79+1
;   undefined4 s_GCHAR2_RAW_005cbf79+2
;   undefined4 s_GCHAR2_RAW_005cbf79+3
;   undefined4 s_GCHAR2_RAW_005cbf79+4
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_flame.cpp_CFlame_setup_FUN_0049f270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417690
        ;   Label: core_bodypart.cpp_CBodyPart_addFire_FUN_00417690
    PUSH EBP                            ; 00417691
    SUB ESP,0x1c                        ; 00417692
    MOV EBX,dword ptr [ESP + 0x28]      ; 00417695
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00417699
    MOV EDX,dword ptr [EBX + 0x8a8]     ; 0041769d
    CMP EDX,0x2                         ; 004176a3
    JGE 0x004177d2                      ; 004176a6
        ;   XREF to: 004177d2 (CONDITIONAL_JUMP)  ; LAB_004177d2
    PUSH EDI                            ; 004176ac
    PUSH ESI                            ; 004176ad
    MOV EAX,EDX                         ; 004176ae
    SHL EAX,0x6                         ; 004176b0
    ADD EAX,EDX                         ; 004176b3
    SHL EAX,0x2                         ; 004176b5
    SUB EAX,EDX                         ; 004176b8
    LEA EBP,[EBX + 0x8ac]               ; 004176ba
    SHL EAX,0x2                         ; 004176c0
    LEA ESI,[EDX + 0x1]                 ; 004176c3
    ADD EBP,EAX                         ; 004176c6
    MOV dword ptr [EBX + 0x8a8],ESI     ; 004176c8
    CMP EBP,ECX                         ; 004176ce
    JZ 0x004176e3                       ; 004176d0
        ;   XREF to: 004176e3 (CONDITIONAL_JUMP)  ; LAB_004176e3
    MOV EAX,dword ptr [ECX]             ; 004176d2
    MOV dword ptr [EBP],EAX             ; 004176d4
    MOV EAX,dword ptr [ECX + 0x4]       ; 004176d7
    MOV dword ptr [EBP + 0x4],EAX       ; 004176da
    MOV EAX,dword ptr [ECX + 0x8]       ; 004176dd
    MOV dword ptr [EBP + 0x8],EAX       ; 004176e0
    PUSH EBP                            ; 004176e3
        ;   Label: LAB_004176e3
    PUSH EBX                            ; 004176e4
    LEA ESI,[ESP + 0x1c]                ; 004176e5
    LEA EDI,[ESP + 0x10]                ; 004176e9
    CALL core_actor.cpp_FUN_00408d70    ; 004176ed
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x1c]                ; 004176f2
    ADD ESP,0x8                         ; 004176f6
    MOVSD ES:EDI,ESI                    ; 004176f9
    MOVSD ES:EDI,ESI                    ; 004176fa
    MOVSD ES:EDI,ESI                    ; 004176fb
    LEA EDX,[EBP + 0x2c]                ; 004176fc
    MOV EAX,dword ptr [ESP + 0x8]       ; 004176ff
    MOV dword ptr [EDX],EAX             ; 00417703
    MOV EAX,dword ptr [ESP + 0xc]       ; 00417705
    MOV dword ptr [EDX + 0x4],EAX       ; 00417709
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041770c
    MOV dword ptr [EDX + 0x8],EAX       ; 00417710
    LEA EAX,[EBP + 0xc]                 ; 00417713
    PUSH EAX                            ; 00417716
    CALL core_flame.cpp_CFlame_setup_FUN_0049f270 ; 00417717
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_setup_FUN_0049f270(CFlame * this_ptr)
    MOV dword ptr [EBP + 0x314],0x0     ; 0041771c
    MOV dword ptr [EBP + 0x2c0],0x3fc00000 ; 00417726
    MOV dword ptr [EBP + 0x2c4],0x40400000 ; 00417730
    MOV ESI,0x5cbf7a                    ; 0041773a | s_GCHAR2_RAW_005cbf79+1
    MOV dword ptr [EBP + 0x2c8],0x3fc00000 ; 0041773f
    ADD ESP,0x4                         ; 00417749
    MOV dword ptr [EBX + 0xfc],0x1      ; 0041774c
    LEA EDI,[EBX + 0x2f4]               ; 00417756
    MOV dword ptr [EBX + 0x2e8],0x1     ; 0041775c
    PUSH EDI                            ; 00417766
    MOV AL,byte ptr [ESI]               ; 00417767 | s_GCHAR2_RAW_005cbf79+1 | s_GCHAR2_RAW_005cbf79+3
        ;   Label: LAB_00417767
    MOV byte ptr [EDI],AL               ; 00417769
    CMP AL,0x0                          ; 0041776b
    JZ 0x0041777f                       ; 0041776d
        ;   XREF to: 0041777f (CONDITIONAL_JUMP)  ; LAB_0041777f
    MOV AL,byte ptr [ESI + 0x1]         ; 0041776f | s_GCHAR2_RAW_005cbf79+2 | s_GCHAR2_RAW_005cbf79+4
    ADD ESI,0x2                         ; 00417772
    MOV byte ptr [EDI + 0x1],AL         ; 00417775
    ADD EDI,0x2                         ; 00417778
    CMP AL,0x0                          ; 0041777b
    JNZ 0x00417767                      ; 0041777d
        ;   XREF to: 00417767 (CONDITIONAL_JUMP)  ; LAB_00417767
    POP EDI                             ; 0041777f
        ;   Label: LAB_0041777f
    MOV EDI,dword ptr [EBX + 0x2dc]     ; 00417780
    XOR EDX,EDX                         ; 00417786
    TEST EDI,EDI                        ; 00417788
    JLE 0x004177b0                      ; 0041778a
        ;   XREF to: 004177b0 (CONDITIONAL_JUMP)  ; LAB_004177b0
    XOR EAX,EAX                         ; 0041778c
    MOV ECX,dword ptr [EBX + 0x2e4]     ; 0041778e
        ;   Label: LAB_0041778e
    MOV dword ptr [ECX + EAX*0x1],0x0   ; 00417794
    INC EDX                             ; 0041779b
    MOV EBP,dword ptr [EBX + 0x2dc]     ; 0041779c
    ADD EAX,0x4                         ; 004177a2
    CMP EDX,EBP                         ; 004177a5
    JL 0x0041778e                       ; 004177a7
        ;   XREF to: 0041778e (CONDITIONAL_JUMP)  ; LAB_0041778e
    LEA EAX,[EAX]                       ; 004177a9
    NOP                                 ; 004177af
    PUSH 0x41a00000                     ; 004177b0
        ;   Label: LAB_004177b0
    PUSH 0x41400000                     ; 004177b5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004177ba
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x28],EAX      ; 004177bf
    MOV EAX,dword ptr [ESP + 0x28]      ; 004177c3
    MOV dword ptr [EBX + 0x10dc],EAX    ; 004177c7
    ADD ESP,0x8                         ; 004177cd
    POP ESI                             ; 004177d0
    POP EDI                             ; 004177d1
    ADD ESP,0x1c                        ; 004177d2
        ;   Label: LAB_004177d2
    POP EBP                             ; 004177d5
    POP EBX                             ; 004177d6
    RET                                 ; 004177d7

