; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_stdio_c_DeallocateFileStruct_FUN_006093b0(FILE *file_struct)
;
; Parameters:
; FILE *           Stack[0x4]:4   file_struct
;
; XREF[2]:
;   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c at 006019b3
;   crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4 at 00601efe
;
; Referenced Globals:
;   FileListNode* g_AllocatedListHead
;   undefined4 g_FreeListHeadPointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006093b0
        ;   Label: crt_stdio.c_DeallocateFileStruct_FUN_006093b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 006093b1
    MOV EDX,0x3f9b200                   ; 006093b5 | g_AllocatedListHead
    MOV EAX,dword ptr [EDX]             ; 006093ba | g_AllocatedListHead
        ;   Label: LAB_006093ba
    TEST EAX,EAX                        ; 006093bc
    JZ 0x006093e5                       ; 006093be
        ;   XREF to: 006093e5 (CONDITIONAL_JUMP)  ; LAB_006093e5
    MOV ECX,dword ptr [EAX + 0x4]       ; 006093c0
    CMP EBX,ECX                         ; 006093c3
    JZ 0x006093cb                       ; 006093c5
        ;   XREF to: 006093cb (CONDITIONAL_JUMP)  ; LAB_006093cb
    MOV EDX,EAX                         ; 006093c7
    JMP 0x006093ba                      ; 006093c9
        ;   XREF to: 006093ba (UNCONDITIONAL_JUMP)  ; LAB_006093ba
    MOV CL,byte ptr [ECX + 0xc]         ; 006093cb
        ;   Label: LAB_006093cb
    OR CL,0x3                           ; 006093ce
    MOV byte ptr [EBX + 0xc],CL         ; 006093d1
    MOV EBX,dword ptr [EAX]             ; 006093d4
    MOV dword ptr [EDX],EBX             ; 006093d6 | g_AllocatedListHead
    MOV EDX,dword ptr [0x03f9b204]      ; 006093d8 | g_FreeListHeadPointer
    MOV [0x03f9b204],EAX                ; 006093de | g_FreeListHeadPointer
    MOV dword ptr [EAX],EDX             ; 006093e3
    POP EBX                             ; 006093e5
        ;   Label: LAB_006093e5
    RET                                 ; 006093e6

