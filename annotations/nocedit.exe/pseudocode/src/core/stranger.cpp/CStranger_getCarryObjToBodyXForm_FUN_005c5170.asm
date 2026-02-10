; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack2_esi void __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170 (CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
;
; Called Functions:
;   core_stranger.cpp_CStranger_FUN_005c07b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5170
        ;   Label: core_stranger.cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170
    PUSH EDI                            ; 005c5171
    SUB ESP,0x30                        ; 005c5172
    MOV EDX,dword ptr [ESP + 0x40]      ; 005c5175
    MOV EBX,ESI                         ; 005c5179
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005c517b
    MOV EAX,EDX                         ; 005c517f
    SHL EAX,0x4                         ; 005c5181
    ADD EAX,EDX                         ; 005c5184
    PUSH EDX                            ; 005c5186
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x24b4] ; 005c5187
    PUSH EDX                            ; 005c518e
    PUSH ESI                            ; 005c518f
    LEA ESI,[ESP + 0xc]                 ; 005c5190
    MOV EDI,EBX                         ; 005c5194
    CALL core_stranger.cpp_CStranger_FUN_005c07b0 ; 005c5196
        ;   XREF to: 005c07b0 (UNCONDITIONAL_CALL)  ; float * core_stranger.cpp_CStranger_FUN_005c07b0(CStranger * this_ptr)
    MOV ECX,0xc                         ; 005c519b
    LEA ESI,[ESP + 0xc]                 ; 005c51a0
    ADD ESP,0xc                         ; 005c51a4
    MOVSD.REP ES:EDI,ESI                ; 005c51a7
    MOV EAX,EBX                         ; 005c51a9
    ADD ESP,0x30                        ; 005c51ab
    POP EDI                             ; 005c51ae
    POP EBX                             ; 005c51af
    RET                                 ; 005c51b0

