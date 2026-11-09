; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_stranger_cpp_FUN_0045de80(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01b4d298
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045de80
        ;   Label: unkafter_stranger.cpp_FUN_0045de80
    PUSH ESI                            ; 0045de81
    PUSH EDI                            ; 0045de82
    SUB ESP,0x18                        ; 0045de83
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0045de86
    MOV EDX,dword ptr [0x01b4d298]      ; 0045de8a | DAT_01b4d298
    MOV EAX,dword ptr [ESP + 0x28]      ; 0045de90
    PUSH EDX                            ; 0045de94
    ADD EAX,0x2b4                       ; 0045de95
    PUSH EAX                            ; 0045de9a
    LEA ESI,[ESP + 0x14]                ; 0045de9b
    LEA EDI,[ESP + 0x8]                 ; 0045de9f
    CALL core_skeleton.cpp_FUN_00546a90 ; 0045dea3
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x14]                ; 0045dea8
    ADD ESP,0x8                         ; 0045deac
    MOV EAX,ESP                         ; 0045deaf
    MOVSD ES:EDI,ESI                    ; 0045deb1
    MOVSD ES:EDI,ESI                    ; 0045deb2
    MOVSD ES:EDI,ESI                    ; 0045deb3
    CMP EBX,EAX                         ; 0045deb4
    JNZ 0x0045dec4                      ; 0045deb6
        ;   XREF to: 0045dec4 (CONDITIONAL_JUMP)  ; LAB_0045dec4
    MOV EAX,0x1                         ; 0045deb8
    ADD ESP,0x18                        ; 0045debd
    POP EDI                             ; 0045dec0
    POP ESI                             ; 0045dec1
    POP EBX                             ; 0045dec2
    RET                                 ; 0045dec3
    MOV EAX,dword ptr [ESP]             ; 0045dec4
        ;   Label: LAB_0045dec4
    MOV dword ptr [EBX],EAX             ; 0045dec7
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045dec9
    MOV dword ptr [EBX + 0x4],EAX       ; 0045decd
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045ded0
    MOV dword ptr [EBX + 0x8],EAX       ; 0045ded4
    MOV EAX,0x1                         ; 0045ded7
    ADD ESP,0x18                        ; 0045dedc
    POP EDI                             ; 0045dedf
    POP ESI                             ; 0045dee0
    POP EBX                             ; 0045dee1
    RET                                 ; 0045dee2

