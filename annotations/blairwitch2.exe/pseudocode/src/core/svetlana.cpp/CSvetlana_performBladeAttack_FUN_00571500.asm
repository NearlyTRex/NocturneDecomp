; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00571500(CSvetlana *this_ptr,int bone_index)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_svetlana.cpp_CSvetlana_advanceMotion_FUN_00571460 at 00571490
;
; Referenced Globals:
;   TerminatedCString s_core_svetlana_cpp_005ec353
;   TerminatedCString s_Can_t_find_svetlana_s_pa_005ec368
;   TerminatedCString s_svetlana_attack_wav_005ec38a
;   TerminatedCString s_svetlana_miss_wav_005ec39f
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 g_CDemonSetInstance.character_count
;   undefined4 g_CDemonSetInstance.characters[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571500
        ;   Label: core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_00571500
    PUSH ESI                            ; 00571501
    PUSH EDI                            ; 00571502
    PUSH EBP                            ; 00571503
    SUB ESP,0xa4                        ; 00571504
    MOV EBP,dword ptr [ESP + 0xb8]      ; 0057150a
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00571511
    LEA EAX,[EBP + 0x2b4]               ; 00571518
    PUSH EAX                            ; 0057151e
    XOR EBX,EBX                         ; 0057151f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00571521
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    MOV ECX,0xffffffff                  ; 00571526
    ADD ESP,0x4                         ; 0057152b
    MOV EDX,EAX                         ; 0057152e
    MOV EDI,dword ptr [EAX + 0x1d1f8]   ; 00571530
    MOV dword ptr [ESP + 0x9c],ECX      ; 00571536
    TEST EDI,EDI                        ; 0057153d
    JLE 0x0057155b                      ; 0057153f
        ;   XREF to: 0057155b (CONDITIONAL_JUMP)  ; LAB_0057155b
    CMP ESI,dword ptr [EAX + 0x1d21c]   ; 00571541
        ;   Label: LAB_00571541
    JZ 0x0057161e                       ; 00571547
        ;   XREF to: 0057161e (CONDITIONAL_JUMP)  ; LAB_0057161e
    INC EBX                             ; 0057154d
    MOV ECX,dword ptr [EDX + 0x1d1f8]   ; 0057154e
    ADD EAX,0x24                        ; 00571554
    CMP EBX,ECX                         ; 00571557
    JL 0x00571541                       ; 00571559
        ;   XREF to: 00571541 (CONDITIONAL_JUMP)  ; LAB_00571541
    CMP dword ptr [ESP + 0x9c],-0x1     ; 0057155b
        ;   Label: LAB_0057155b
    JZ 0x0057162a                       ; 00571563
        ;   XREF to: 0057162a (CONDITIONAL_JUMP)  ; LAB_0057162a
    PUSH ESI                            ; 00571569
        ;   Label: LAB_00571569
    LEA EBX,[EBP + 0x2b4]               ; 0057156a
    PUSH EBX                            ; 00571570
    LEA ESI,[ESP + 0x50]                ; 00571571
    LEA EDI,[ESP + 0x8c]                ; 00571575
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 0057157c
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00571581
    LEA EAX,[ESP + 0x84]                ; 00571584
    LEA ESI,[ESP + 0x48]                ; 0057158b
    PUSH EAX                            ; 0057158f
    MOVSD ES:EDI,ESI                    ; 00571590
    MOVSD ES:EDI,ESI                    ; 00571591
    MOVSD ES:EDI,ESI                    ; 00571592
    PUSH EBP                            ; 00571593
    LEA ESI,[ESP + 0x98]                ; 00571594
    LEA EDI,[ESP + 0x74]                ; 0057159b
    CALL core_actor.cpp_FUN_00408d70    ; 0057159f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x98]                ; 005715a4
    ADD ESP,0x8                         ; 005715ab
    MOVSD ES:EDI,ESI                    ; 005715ae
    MOVSD ES:EDI,ESI                    ; 005715af
    MOVSD ES:EDI,ESI                    ; 005715b0
    MOV ESI,dword ptr [ESP + 0x9c]      ; 005715b1
    PUSH ESI                            ; 005715b8
    PUSH EBX                            ; 005715b9
    LEA ESI,[ESP + 0x44]                ; 005715ba
    LEA EDI,[ESP + 0x80]                ; 005715be
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 005715c5
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 005715ca
    LEA EAX,[ESP + 0x78]                ; 005715cd
    LEA ESI,[ESP + 0x3c]                ; 005715d1
    PUSH EAX                            ; 005715d5
    MOVSD ES:EDI,ESI                    ; 005715d6
    MOVSD ES:EDI,ESI                    ; 005715d7
    MOVSD ES:EDI,ESI                    ; 005715d8
    PUSH EBP                            ; 005715d9
    LEA ESI,[ESP + 0x5c]                ; 005715da
    LEA EDI,[ESP + 0x68]                ; 005715de
    CALL core_actor.cpp_FUN_00408d70    ; 005715e2
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x5c]                ; 005715e7
    ADD ESP,0x8                         ; 005715eb
    MOVSD ES:EDI,ESI                    ; 005715ee
    MOVSD ES:EDI,ESI                    ; 005715ef
    MOVSD ES:EDI,ESI                    ; 005715f0
    XOR EDI,EDI                         ; 005715f1
    XOR ESI,ESI                         ; 005715f3
    MOV dword ptr [ESP + 0xa0],EDI      ; 005715f5
    MOV EAX,[0x0061b5a8]                ; 005715fc | g_CDemonSetPtr
        ;   Label: LAB_005715fc
    CMP ESI,dword ptr [EAX + 0x14f0a8]  ; 00571601 | g_CDemonSetInstance.character_count
    JGE 0x005716be                      ; 00571607
        ;   XREF to: 005716be (CONDITIONAL_JUMP)  ; LAB_005716be
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f0ac] ; 0057160d | g_CDemonSetInstance.characters[0]
    CMP EBX,EBP                         ; 00571614
    JNZ 0x00571652                      ; 00571616
        ;   XREF to: 00571652 (CONDITIONAL_JUMP)  ; LAB_00571652
    INC ESI                             ; 00571618
        ;   Label: LAB_00571618
    ADD EDI,0x4                         ; 00571619
    JMP 0x005715fc                      ; 0057161c
        ;   XREF to: 005715fc (UNCONDITIONAL_JUMP)  ; LAB_005715fc
    MOV dword ptr [ESP + 0x9c],EBX      ; 0057161e
        ;   Label: LAB_0057161e
    JMP 0x0057155b                      ; 00571625
        ;   XREF to: 0057155b (UNCONDITIONAL_JUMP)  ; LAB_0057155b
    MOV EDX,0x5ec353                    ; 0057162a | = "..\\core\\svetlana.cpp"
        ;   Label: LAB_0057162a
    MOV ECX,0x2ef                       ; 0057162f
    PUSH 0x5ec368                       ; 00571634 | = "Can't find svetlana's parent bone"
    MOV dword ptr [0x01d046a0],EDX      ; 00571639 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0057163f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00571645
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0057164a
    JMP 0x00571569                      ; 0057164d
        ;   XREF to: 00571569 (UNCONDITIONAL_JUMP)  ; LAB_00571569
    MOV EAX,ESP                         ; 00571652
        ;   Label: LAB_00571652
    PUSH EAX                            ; 00571654
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00571655
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EAX,0x41700000                  ; 0057165a
    ADD ESP,0x4                         ; 0057165f
    MOV EDX,0x3f333333                  ; 00571662
    MOV dword ptr [ESP + 0x4],EAX       ; 00571667
    MOV EAX,0x3                         ; 0057166b
    PUSH 0x0                            ; 00571670
    MOV dword ptr [ESP + 0x2c],EAX      ; 00571672
    LEA EAX,[ESP + 0x4]                 ; 00571676
    MOV ECX,0x67                        ; 0057167a
    PUSH EAX                            ; 0057167f
    LEA EAX,[ESP + 0x68]                ; 00571680
    MOV dword ptr [ESP + 0x34],EDX      ; 00571684
    PUSH EAX                            ; 00571688
    LEA EAX,[ESP + 0x78]                ; 00571689
    MOV dword ptr [ESP + 0x3c],ECX      ; 0057168d
    PUSH EAX                            ; 00571691
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00571692
    PUSH EBX                            ; 00571698
    CALL dword ptr [EDX + 0x10c]        ; 00571699
    ADD ESP,0x14                        ; 0057169f
    TEST EAX,EAX                        ; 005716a2
    JZ 0x00571618                       ; 005716a4
        ;   XREF to: 00571618 (CONDITIONAL_JUMP)  ; LAB_00571618
    MOV dword ptr [ESP + 0xa0],0x1      ; 005716aa
    INC ESI                             ; 005716b5
    ADD EDI,0x4                         ; 005716b6
    JMP 0x005715fc                      ; 005716b9
        ;   XREF to: 005715fc (UNCONDITIONAL_JUMP)  ; LAB_005715fc
    CMP dword ptr [ESP + 0xa0],0x0      ; 005716be
        ;   Label: LAB_005716be
    JZ 0x005716e5                       ; 005716c6
        ;   XREF to: 005716e5 (CONDITIONAL_JUMP)  ; LAB_005716e5
    PUSH 0x5ec38a                       ; 005716c8 | = "svetlana-attack?.wav"
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 005716cd
        ;   Label: LAB_005716cd
    PUSH EBP                            ; 005716d3
    CALL dword ptr [EAX + 0x34]         ; 005716d4
    ADD ESP,0x8                         ; 005716d7
    ADD ESP,0xa4                        ; 005716da
    POP EBP                             ; 005716e0
    POP EDI                             ; 005716e1
    POP ESI                             ; 005716e2
    POP EBX                             ; 005716e3
    RET                                 ; 005716e4
    PUSH 0x5ec39f                       ; 005716e5 | = "svetlana-miss?.wav"
        ;   Label: LAB_005716e5
    JMP 0x005716cd                      ; 005716ea
        ;   XREF to: 005716cd (UNCONDITIONAL_JUMP)  ; LAB_005716cd

