; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_sound_cpp_CSound_getSoundModeName_FUN_0052ec90(CSound *this_ptr,int sound_mode_index)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sound_mode_index
;
; Referenced Globals:
;   undefined4 DAT_00594bfe
;   void* PTR_s_OFF_00594c3d_005bed6c = 00594c3d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0052ec90
        ;   Label: core_sound.cpp_CSound_getSoundModeName_FUN_0052ec90
    TEST EAX,EAX                        ; 0052ec94
    JL 0x0052ec9d                       ; 0052ec96
        ;   XREF to: 0052ec9d (CONDITIONAL_JUMP)  ; LAB_0052ec9d
    CMP EAX,0x1b                        ; 0052ec98
    JL 0x0052eca3                       ; 0052ec9b
        ;   XREF to: 0052eca3 (CONDITIONAL_JUMP)  ; LAB_0052eca3
    MOV EAX,0x594bfe                    ; 0052ec9d | DAT_00594bfe
        ;   Label: LAB_0052ec9d
    RET                                 ; 0052eca2
    SHL EAX,0x4                         ; 0052eca3
        ;   Label: LAB_0052eca3
    MOV EAX,dword ptr [EAX + 0x5bed6c]  ; 0052eca6 | PTR_s_OFF_00594c3d_005bed6c
    RET                                 ; 0052ecac

