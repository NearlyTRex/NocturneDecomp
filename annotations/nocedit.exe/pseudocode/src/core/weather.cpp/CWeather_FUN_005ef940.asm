; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_weather_cpp_CWeather_FUN_005ef940(void)
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b171
;
; Referenced Globals:
;   CVector3f[200] DAT_03f95df8
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ef940
        ;   Label: core_weather.cpp_CWeather_FUN_005ef940
    PUSH ESI                            ; 005ef941
    PUSH EDI                            ; 005ef942
    PUSH EBP                            ; 005ef943
    MOV EBP,ESP                         ; 005ef944
    SUB ESP,0x40                        ; 005ef946
    AND ESP,0xfffffff8                  ; 005ef949
    MOV EDI,dword ptr [EBP + 0x18]      ; 005ef94c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ef94f
    ADD EAX,0x8                         ; 005ef952
    CMP EAX,EDI                         ; 005ef955
    JNZ 0x005efb2b                      ; 005ef957
        ;   XREF to: 005efb2b (CONDITIONAL_JUMP)  ; LAB_005efb2b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ef95d
        ;   Label: LAB_005ef95d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005ef960
    ADD EAX,0x14                        ; 005ef963
    CMP EAX,EDX                         ; 005ef966
    JZ 0x005ef97a                       ; 005ef968
        ;   XREF to: 005ef97a (CONDITIONAL_JUMP)  ; LAB_005ef97a
    MOV ECX,dword ptr [EDX]             ; 005ef96a
    MOV dword ptr [EAX],ECX             ; 005ef96c
    MOV ECX,dword ptr [EDX + 0x4]       ; 005ef96e
    MOV dword ptr [EAX + 0x4],ECX       ; 005ef971
    MOV ECX,dword ptr [EDX + 0x8]       ; 005ef974
    MOV dword ptr [EAX + 0x8],ECX       ; 005ef977
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ef97a
        ;   Label: LAB_005ef97a
    CMP dword ptr [EAX],0x0             ; 005ef97d
    JZ 0x005efb24                       ; 005ef980
        ;   XREF to: 005efb24 (CONDITIONAL_JUMP)  ; LAB_005efb24
    MOV EBX,0x3f95df8                   ; 005ef986 | DAT_03f95df8
    XOR ESI,ESI                         ; 005ef98b
    PUSH 0x42480000                     ; 005ef98d
        ;   Label: LAB_005ef98d
    PUSH 0x40a00000                     ; 005ef992
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005ef997
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV ESP,EBP                         ; 005efb24
        ;   Label: LAB_005efb24
    POP EBP                             ; 005efb26
    POP EDI                             ; 005efb27
    POP ESI                             ; 005efb28
    POP EBX                             ; 005efb29
    RET                                 ; 005efb2a
    MOV EDX,dword ptr [EDI]             ; 005efb2b
        ;   Label: LAB_005efb2b
    MOV dword ptr [EAX],EDX             ; 005efb2d
    MOV EDX,dword ptr [EDI + 0x4]       ; 005efb2f
    MOV dword ptr [EAX + 0x4],EDX       ; 005efb32
    MOV EDX,dword ptr [EDI + 0x8]       ; 005efb35
    MOV dword ptr [EAX + 0x8],EDX       ; 005efb38
    JMP 0x005ef95d                      ; 005efb3b
        ;   XREF to: 005ef95d (UNCONDITIONAL_JUMP)  ; LAB_005ef95d

