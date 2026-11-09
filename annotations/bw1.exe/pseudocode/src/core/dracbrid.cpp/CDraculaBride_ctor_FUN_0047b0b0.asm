; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_0047b0b0(CDraculaBride *this_ptr)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dracbrid.cpp_factoryFuncDraculaBride_FUN_0047b080 at 0047b093
;
; Referenced Globals:
;   undefined4 DAT_005ff184
;   undefined4 DAT_005ff188
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0047b0b0
        ;   Label: core_dracbrid.cpp_CDraculaBride_ctor_FUN_0047b0b0
    MOV ESI,dword ptr [ESP + 0x8]       ; 0047b0b1
    PUSH EBX                            ; 0047b0b5
    PUSH ESI                            ; 0047b0b6
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 0047b0b7
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0047b0bc
    MOV EBX,EAX                         ; 0047b0bf
    PUSH 0x5dac1b                       ; 0047b0c1
    MOV ESI,EAX                         ; 0047b0c6
    ADD EAX,0x158                       ; 0047b0c8
    PUSH EAX                            ; 0047b0cd
    MOV dword ptr [EAX + -0x4],0x5ff1b4 ; 0047b0ce
    CALL core_skeleton.cpp_FUN_00569f50 ; 0047b0d5
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    MOV dword ptr [EBX + 0x2fec],0x3f000000 ; 0047b0da
    MOV dword ptr [EBX + 0x2ff0],0x3f800000 ; 0047b0e4
    MOV byte ptr [EBX + 0xc28c],0x0     ; 0047b0ee
    MOV dword ptr [EBX + 0x2538],0x43070000 ; 0047b0f5
    FLD float ptr [0x005ff184]          ; 0047b0ff | DAT_005ff184
    MOV dword ptr [EBX + 0xc2f4],0x0    ; 0047b105
    FLD float ptr [0x005ff188]          ; 0047b10f | DAT_005ff188
    MOV dword ptr [EBX + 0xc2f8],0x0    ; 0047b115
    LEA EAX,[EBX + 0xc304]              ; 0047b11f
    FXCH                                ; 0047b125
    FSTP float ptr [EBX + 0x2ff4]       ; 0047b127
    FSTP float ptr [EBX + 0x2ff8]       ; 0047b12d
    MOV dword ptr [EAX + 0x8],0x0       ; 0047b133
    ADD ESP,0x8                         ; 0047b13a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047b13d
    MOV dword ptr [EAX + 0x4],EDX       ; 0047b140
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047b143
    MOV dword ptr [EAX],EDX             ; 0047b146
    MOV dword ptr [EBX + 0xc310],0x0    ; 0047b148
    MOV EAX,EBX                         ; 0047b152
    MOV dword ptr [EBX + 0xc2f0],0x1    ; 0047b154
    LEA EDX,[EBX + 0xf0]                ; 0047b15e
    POP EBX                             ; 0047b164
    ADD EAX,0x4                         ; 0047b165
        ;   Label: LAB_0047b165
    MOV dword ptr [EAX + 0xc314],0x0    ; 0047b168
    CMP EAX,EDX                         ; 0047b172
    JNZ 0x0047b165                      ; 0047b174
        ;   XREF to: 0047b165 (CONDITIONAL_JUMP)  ; LAB_0047b165
    MOV dword ptr [ESI + 0xc314],0x0    ; 0047b176
    MOV dword ptr [ESI + 0xc40c],0x0    ; 0047b180
    MOV dword ptr [ESI + 0xc300],0x0    ; 0047b18a
    MOV EAX,ESI                         ; 0047b194
    MOV dword ptr [ESI + 0xc408],0x0    ; 0047b196
    POP ESI                             ; 0047b1a0
    RET                                 ; 0047b1a1

