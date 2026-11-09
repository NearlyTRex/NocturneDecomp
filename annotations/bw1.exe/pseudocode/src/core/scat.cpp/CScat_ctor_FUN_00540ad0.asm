; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_00540ad0(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_scat.cpp_factoryFuncScat_FUN_00540aa0 at 00540ab3
;
; Called Functions:
;   core_charactr.cpp_FUN_00434320
;   core_hero.cpp_FUN_004ea830
;   core_scat.cpp_FUN_00540d50
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540ad0
        ;   Label: core_scat.cpp_CScat_ctor_FUN_00540ad0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00540ad1
    PUSH EDX                            ; 00540ad5
    CALL core_hero.cpp_FUN_004ea830     ; 00540ad6
        ;   XREF to: 004ea830 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_FUN_004ea830(CHero * this_ptr)
    ADD ESP,0x4                         ; 00540adb
    MOV EBX,EAX                         ; 00540ade
    ADD EAX,0x158                       ; 00540ae0
    PUSH 0x5edcc3                       ; 00540ae5
    MOV dword ptr [EAX + -0x4],0x604c44 ; 00540aea
    PUSH EAX                            ; 00540af1
    MOV dword ptr [EAX + 0x1fe54],0x0   ; 00540af2
    CALL core_skeleton.cpp_FUN_00569f50 ; 00540afc
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    LEA EAX,[EBX + 0x1ffb0]             ; 00540b01
    MOV dword ptr [EBX + 0x1ffbc],0x3f800000 ; 00540b07
    ADD ESP,0x8                         ; 00540b11
    MOV dword ptr [EAX + 0x8],0x0       ; 00540b14
    PUSH EBX                            ; 00540b1b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00540b1c
    MOV dword ptr [EAX + 0x4],EDX       ; 00540b1f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00540b22
    MOV dword ptr [EAX],EDX             ; 00540b25
    CALL core_scat.cpp_FUN_00540d50     ; 00540b27
        ;   XREF to: 00540d50 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_FUN_00540d50(CScat * this_ptr)
    ADD ESP,0x4                         ; 00540b2c
    MOV dword ptr [EBX + 0x1ffc0],0x0   ; 00540b2f
    PUSH 0x0                            ; 00540b39
    MOV dword ptr [EBX + 0x1ffc8],0x0   ; 00540b3b
    PUSH 0x5edccc                       ; 00540b45
    MOV dword ptr [EBX + 0x1ffd0],0x0   ; 00540b4a
    PUSH 0x1                            ; 00540b54
    MOV dword ptr [EBX + 0x1ffd4],0x0   ; 00540b56
    PUSH 0x0                            ; 00540b60
    FLD float ptr [EBX + 0x1ffc8]       ; 00540b62
    PUSH EBX                            ; 00540b68
    FSTP float ptr [EBX + 0x1ffc4]      ; 00540b69
    CALL core_charactr.cpp_FUN_00434320 ; 00540b6f
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00540b74
    PUSH 0x0                            ; 00540b77
    PUSH 0x5edce2                       ; 00540b79
    PUSH 0x2                            ; 00540b7e
    PUSH 0x1                            ; 00540b80
    PUSH EBX                            ; 00540b82
    CALL core_charactr.cpp_FUN_00434320 ; 00540b83
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00540b88
    MOV EAX,EBX                         ; 00540b8b
    POP EBX                             ; 00540b8d
    RET                                 ; 00540b8e

