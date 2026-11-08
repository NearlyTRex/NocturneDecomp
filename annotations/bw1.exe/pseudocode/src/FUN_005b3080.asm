; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b3080(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005030e0 at 00503168
;
; Referenced Globals:
;   void* PTR_MessageBoxA_005d04dc = 001d0b66
;   void* PTR_ExitProcess_005d0544 = 001d0d10
;   TerminatedCString s_s_File_s_Line_d_005f9c7a
;   TerminatedCString s_Nocturne_005f9e9d
;   void* PTR_s_Nocturne_006260dc = 005f9e9d
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c9a630
;   undefined4 DAT_02c9be68
;
; Called Functions:
;   ExitProcess
;   FUN_005bfb40
;   MessageBoxA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b3080
        ;   Label: FUN_005b3080
    PUSH ESI                            ; 005b3081
    PUSH EDI                            ; 005b3082
    MOV EDX,dword ptr [0x01d1d404]      ; 005b3083 | DAT_01d1d404
    PUSH EDX                            ; 005b3089
    MOV ECX,dword ptr [0x01d1d400]      ; 005b308a | DAT_01d1d400
    PUSH ECX                            ; 005b3090
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b3091
    PUSH EBX                            ; 005b3095
    PUSH 0x5f9c7a                       ; 005b3096 | = "%s\n\nFile: %s\nLine: %d"
    PUSH 0x2c9a630                      ; 005b309b
    CALL FUN_005bfb40                   ; 005b30a0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x14                        ; 005b30a5
    PUSH 0x30                           ; 005b30a8
    MOV ESI,dword ptr [0x006260dc]      ; 005b30aa | PTR_s_Nocturne_006260dc
    PUSH ESI                            ; 005b30b0 | = "Nocturne"
    PUSH 0x2c9a630                      ; 005b30b1 | DAT_02c9a630
    MOV EDI,dword ptr [0x02c9be68]      ; 005b30b6 | DAT_02c9be68
    PUSH EDI                            ; 005b30bc
    CALL dword ptr CS:[0x5d04dc]        ; 005b30bd | PTR_MessageBoxA_005d04dc
    PUSH 0x1                            ; 005b30c4
    CALL dword ptr CS:[0x5d0544]        ; 005b30c6 | PTR_ExitProcess_005d0544

