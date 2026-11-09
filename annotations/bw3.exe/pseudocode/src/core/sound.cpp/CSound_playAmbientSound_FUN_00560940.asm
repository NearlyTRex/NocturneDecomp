; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_00560940(CSound *this_ptr,char *sound_name)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052e890
;   core_script.cpp_FUN_005297a0 at 005298da
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_02cf5e98
;   undefined4 DAT_02cf5e99
;   undefined4 DAT_02cf5e9a
;   undefined4 DAT_02cf5e9b
;   undefined4 DAT_02cf5ec0
;   undefined4 DAT_02cf5ec4
;
; Called Functions:
;   core_sound.cpp_CSound_playSound_FUN_005609b0
;   core_sound.cpp_FUN_00560b00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00560940
        ;   Label: core_sound.cpp_CSound_playAmbientSound_FUN_00560940
    PUSH EDI                            ; 00560941
    MOV EDX,dword ptr [0x02cf5ec0]      ; 00560942 | DAT_02cf5ec0
    PUSH EDX                            ; 00560948
    MOV ECX,dword ptr [ESP + 0x10]      ; 00560949
    PUSH ECX                            ; 0056094d
    CALL core_sound.cpp_FUN_00560b00    ; 0056094e
        ;   XREF to: 00560b00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_00560b00(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00560953
    MOV EDI,0x2cf5e98                   ; 00560956
    MOV ESI,dword ptr [ESP + 0x10]      ; 0056095b
    PUSH EDI                            ; 0056095f
    MOV AL,byte ptr [ESI]               ; 00560960
        ;   Label: LAB_00560960
    MOV byte ptr [EDI],AL               ; 00560962 | DAT_02cf5e98 | DAT_02cf5e9a
    CMP AL,0x0                          ; 00560964
    JZ 0x00560978                       ; 00560966
        ;   XREF to: 00560978 (CONDITIONAL_JUMP)  ; LAB_00560978
    MOV AL,byte ptr [ESI + 0x1]         ; 00560968
    ADD ESI,0x2                         ; 0056096b
    MOV byte ptr [EDI + 0x1],AL         ; 0056096e | DAT_02cf5e99 | DAT_02cf5e9b
    ADD EDI,0x2                         ; 00560971
    CMP AL,0x0                          ; 00560974
    JNZ 0x00560960                      ; 00560976
        ;   XREF to: 00560960 (CONDITIONAL_JUMP)  ; LAB_00560960
    POP EDI                             ; 00560978
        ;   Label: LAB_00560978
    CMP dword ptr [0x02cf5ec4],0x0      ; 00560979 | DAT_02cf5ec4
    JNZ 0x00560985                      ; 00560980
        ;   XREF to: 00560985 (CONDITIONAL_JUMP)  ; LAB_00560985
    POP EDI                             ; 00560982
    POP ESI                             ; 00560983
    RET                                 ; 00560984
    PUSH EDI                            ; 00560985 | DAT_02cf5e98
        ;   Label: LAB_00560985
    MOV ESI,dword ptr [0x00603b28]      ; 00560986 | g_CDemonSetPtr
    PUSH ESI                            ; 0056098c
    MOV EDI,dword ptr [ESP + 0x14]      ; 0056098d
    PUSH EDI                            ; 00560991
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 00560992
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 00560997
    MOV [0x02cf5ec0],EAX                ; 0056099a | DAT_02cf5ec0
    POP EDI                             ; 0056099f
    POP ESI                             ; 005609a0
    RET                                 ; 005609a1

